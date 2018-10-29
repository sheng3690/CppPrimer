#include<vector>
#include<string>
#include<utility>
#include<iostream>

using namespace std;

int main() {
	string s;
	int i;
	vector<pair<string, int>> vp;
	// 1
	// pair<string, int> p;
	
	while (cin >> s) {
		cin >> i;
		// 2
		// pair<string, int> p(s, i);
		// 3
		// pair<string, int> p = { s,i };
		// vp.push_back(p);
		// 4
		vp.push_back(make_pair(s,i));
	}
	for (int i = 0; i < vp.size(); i++) {
		cout << i << ":" << vp[i].first << " " << vp[i].second << endl;
	}
	system("pause");
	return 0;
}