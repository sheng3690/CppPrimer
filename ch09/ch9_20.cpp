#include<iostream>
#include<list>
#include<deque>
using namespace std;

int main() {
	list<int> l = { 1,2,3,4,5,6 };
	deque<int> odd_deque;
	deque<int> even_deque;
	int flag = 0;
	for (auto iter = l.cbegin(); iter != l.cend(); ++iter) {
		if (flag == 0) {
			odd_deque.push_back(*iter);
			flag = 1;
		}
		else if (flag == 1) {
			even_deque.push_back(*iter);
			flag = 0;
		}
	}
	for (auto iter = odd_deque.cbegin(); iter != odd_deque.cend(); ++iter) {
		cout << *iter << endl;
	}
	for (auto iter = even_deque.cbegin(); iter != even_deque.cend(); ++iter) {
		cout << *iter << endl;
	}
	system("pause");
	/*
	list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> odd, even;
    for (auto i : l) (i & 0x1 ? odd : even).push_back(i);

    for (auto i : odd) cout << i << " ";
    cout << endl;
    for (auto i : even) cout << i << " ";
    cout << endl;

    return 0;
	看见这个0x你肯定知道这就是16进制表示了，而0x1就是最后一位肯定是1。偶数的二进制表示中最后一位肯定是0，如果是奇数那肯定是1，所以一个整数与0x1做按位与运算得到的结果是0或者1就可以判断出这个整数是偶数还是奇数。

由此可以推想在计算机编程中最好具备二进制的思维。*/
}