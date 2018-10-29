#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

int main() {
	vector<int> vi = { 1,1,1,1,1,1 };
	fill_n(vi.begin(), vi.size(), 0);
	for (unsigned int i = 0; i < vi.size(); ++i) {
		cout << vi[i] << " ";
	}
	cout << endl;
	system("pause");
}