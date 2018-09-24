#include<string>
#include<iostream>

using namespace std;

void replaceString(string &s, string oldVal, string newVal) {
	auto len = oldVal.size();
	auto beg = s.begin();
	while (beg != s.end()-len+1) {
		string s1(beg, beg + len);
		if (s1 == oldVal) {
			beg = s.erase(beg, beg + len);
			beg = s.insert(beg, newVal.begin(),newVal.end());
			beg += len;
		}
		else {
			++beg;
		}
	}
}
int main() {
	string s = { "hello,tho;hi,tho" };
	replaceString(s, "tho", "though");
	cout << s << endl;
	system("pause");
}