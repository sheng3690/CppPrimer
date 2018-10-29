#include<iostream>
#include<algorithm>
#include<list>
#include<string>
using namespace std;

int main() {
	list<string> ls;
	string s;
	while (cin >> s) {
		ls.push_back(s);
		getchar();
	}
	string findS;
	cin >> findS;
	int cnt;
	cnt = count(ls.begin(), ls.end(), findS);
	cout << cnt << endl;
	system("pause");
	/*not complete*/
}