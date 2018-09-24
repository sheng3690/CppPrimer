#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v1 = { 1,2 };
	vector<int> v2(1, 2);
	cout << boolalpha << (v1 == v2) << endl;
	system("pause");
}