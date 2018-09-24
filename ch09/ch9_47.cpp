#include<string>
#include<iostream>

using namespace std;

int main() {
	string s = "ab2c3d7R4E6";
	string numbers = "0123456789";
	string::size_type pos = 0;
	while ((pos = s.find_first_of(numbers, pos)) != string::npos) {
		cout << "found number at index:" << pos
			<< "element is " << s[pos] << endl;
		++pos;
	}
	pos = 0;
	while ((pos = s.find_first_not_of(numbers, pos)) != string::npos) {
		cout << "found not number at index:" << pos
			<< "element is " << s[pos] << endl;
		++pos;
	}
	system("pause");
}