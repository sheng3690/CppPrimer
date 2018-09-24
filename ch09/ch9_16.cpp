#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main() {
	list<int> v1 = { 1,2,3 };
	vector<int> v2 = { 1,2,3 };
	cout << boolalpha << (vector<int>(v1.begin(), v1.end()) == v2) << endl;
	system("pause");
	
}