#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main() {
	deque<string> ds;
	string s;
	while (cin >> s) {
		ds.push_back(s);
	}
	for (auto iter = ds.cbegin(); iter != ds.cend(); ++iter) {
		cout << *iter << endl;
	}
	system("pause");
}