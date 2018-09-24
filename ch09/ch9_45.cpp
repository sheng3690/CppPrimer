#include<string>
#include<iostream>

using namespace std;

string addPreAndTail(string &s, string pre, string tail) {
	s.insert(0, pre);
	s.append(tail);
	return s;
}

int main() {
	string s = "Bob";
	string pre = "Ms.";
	string tail = "III";
	s = addPreAndTail(s, pre, tail);
	cout << s << endl;
	system("pause");
}