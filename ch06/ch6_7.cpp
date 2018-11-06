#include<iostream>
int bar() {
	static int i = 0;
	return i++;
}
int main() {
	for (size_t i = 0; i < 10; ++i) {
		std::cout << bar() << std::endl;
	}
	system("pause");
	return 0;
}

