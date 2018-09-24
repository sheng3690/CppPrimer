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
	�������0x��϶�֪�������16���Ʊ�ʾ�ˣ���0x1�������һλ�϶���1��ż���Ķ����Ʊ�ʾ�����һλ�϶���0������������ǿ϶���1������һ��������0x1����λ������õ��Ľ����0����1�Ϳ����жϳ����������ż������������

�ɴ˿��������ڼ�����������þ߱������Ƶ�˼ά��*/
}