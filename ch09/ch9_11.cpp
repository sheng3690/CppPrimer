#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v1;
	vector<int> v2 = { 1,2,3 };
	vector<int> v3{ 1,2,3 };
	vector<int> v4 = v2;
	vector<int> v5(v2);
	vector<int> v6(v2.begin(), v2.end());
	vector<int> v7(10);
	vector<int> v8(10, 1);
}