#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

int main() {
	vector<int> vi = { 1,2,3,4,5 };
	vector<double> vd = { 1.1,2.0,3.0,4.0,5.0 };
	int sum = accumulate(vi.cbegin(), vi.cend(), 0);
	double sum1 = accumulate(vd.cbegin(), vd.cend(), 0);
	cout << "The sum of vector is£º " << sum1<< endl;
	system("pause");
}