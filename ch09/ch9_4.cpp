#include<iostream>
#include<vector>

using namespace std;
bool serachValInVector(vector<int>::iterator begin, vector<int>::iterator end, int value) {
	while (begin != end) {
		if (*begin == value) {
			return true;
		}
		else {
			++begin;
		}
	}
	return false;
}
int main() {
	vector<int> v = { 1,2,3,4,5 };
	bool result = serachValInVector(v.begin(), v.end(),6);
	cout << result << endl;
	system("pause");
}

