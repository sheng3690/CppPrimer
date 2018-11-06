#include<iostream>

void fun(int i) {
	std::cout << i << std::endl;
}

int main() {
	const int i = 1;
	fun(i);
	system("pause");
	return 0;
}