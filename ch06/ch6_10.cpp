#include<iostream>

void Swap(int *p1, int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {
	int a = 1, b = 2;
	int *p1 = &a, *p2 = &b;
	Swap(p1, p2);
	std::cout << *p1 << " " << *p2 << std::endl;
	system("pause");
	return 0;
}