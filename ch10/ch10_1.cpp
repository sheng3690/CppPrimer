#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int> vi = { 1,2,1,4,2,1,5,1,3 };
	int cnt = count(vi.cbegin(), vi.cend(), 1);
	cout << "The number of 1 happend in vector is :" << cnt << endl;
	system("pause");
}