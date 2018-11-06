#include<iostream>

void Swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 1, b = 2;
	Swap(a, b);
	std::cout << a << " " << b << std::endl;
	system("pause");
	return 0;
}