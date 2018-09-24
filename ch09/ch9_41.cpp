#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<char> vc = { 'H','i'};

	string s(vc.begin(),vc.end());
	cout << s << endl;
	system("pause");
	
}