#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
 	int n;
 	cin >> n;
 	vector<pair<string, string>> vec;
 	for (int i = 0; i < n; i++) {
 		string s, c;
 		cin >> s >> c;
 		vec.push_back(make_pair(s, c));
 	}
 	int from = 0;
 	int to = (int) vec.size() - 1;
 	// using vector<pair<string, string>> data structure
 	while (from <= to) {
 		bool checker = true;
 		for (int i = 0; i < (int) vec.size(); i++) {
 			if (vec[from].first == vec[i].first && vec[from].second == vec[i].second && from != i) {
 				checker = false;
 				break;
 			}
 		}
 		if (!checker) {
 			vec.erase(vec.begin() + from);
 		} else {
 			from++;
 		}
 	}
 	cout << (int) vec.size() << '\n';
	return 0;
}
