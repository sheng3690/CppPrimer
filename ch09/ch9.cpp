#include<list>
#include<deque>
#include<vector>
#include<iostream>

using namespace std;

int main() {
	list<deque<int>> ldi = { {1,2},{2,3} };
	deque<int> di = { 1,2,3 };
	for (unsigned int i = 0; i < ldi.size(); ++i) {
		cout << di[i] <<endl;
	}
	
	system("pause");
}