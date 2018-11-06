#include<iostream>
#include<initializer_list>
using std::initializer_list;

int SumIL(initializer_list<int> ili) {
	int sum = 0;
	for (const int &e : ili) {
		sum += e;
	}
	return sum;
}

int main() {
	std::cout << SumIL({ 1,2,3,4 }) << std::endl;
	system("pause");
	return 0;
}