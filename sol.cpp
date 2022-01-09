#include <bits/stdc++.h>

using namespace std;

struct Leaf {
	string species;
	string color;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
 	int n;
 	cin >> n;
 	vector<Leaf> vec; // vector-struct container
 	// check if the species and color of the leaf already exist
 	for (int i = 0; i < n; i++) {
 		string s, c;
 		cin >> s >> c;
 		bool checker = true;
 		for (auto& e : vec) {
 			if (s == e.species && c == e.color) {
 				checker = false;
 				break;
 			}
 		}
 		if (checker) {
 			Leaf l;
 			l.species = s;
 			l.color = c;
 			vec.push_back(l);
 		}	
 	}
 	cout << (int) vec.size() << '\n';
	return 0;
}