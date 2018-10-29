#include<vector>
#include<string>
#include<utility>
#include<iostream>

using namespace std;

int main() {
	string s;
	int i;
	pair<string, int> p;
	vector<pair<string, int>> vp;
	while (cin >> s) {
		cin >> i;
		p.first = s;
		p.second = i;
		vp.push_back(p);
	}
	for (int i = 0; i < vp.size(); i++) {
		cout << i << ":" << vp[i].first << " " << vp[i].second << endl;
	}
	system("pause");
	return 0;
}