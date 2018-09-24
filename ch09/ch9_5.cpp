#include<iostream>
#include<vector>

using namespace std;
vector<int>::const_iterator serachValInVector(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value) {
	while (begin != end) {
		if (*begin == value) {
			return begin;
		}
		else {
			++begin;
		}
	}
	return end;
}
int main() {
	vector<int> v = { 1,2,3,4,5 };
	vector<int>::const_iterator result = serachValInVector(v.cbegin(), v.cend(), 3);
	cout << *result << endl;
	system("pause");
}

