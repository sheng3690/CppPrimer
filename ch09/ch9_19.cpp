#include<iostream>
#include<list>
#include<string>
using namespace std;

int main()
{
	list<string> input;
	for (string str; cin >> str; input.push_back(str))
		;
	for (auto iter = input.cbegin(); iter != input.cend(); ++iter)
		cout << *iter << endl;
	system("pause");
	return 0;
}