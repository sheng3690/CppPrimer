#include<iostream>
#include<deque>

using namespace std;

int main() {
	// ��ʼ��
	// 1.ͨ����ʼ���б�
	deque<int> d1 = { 1,2,3 };
	// 2. ͨ��ָ��������С����
	deque<int> d2(10, 1);
	// 3. ͨ��
	deque<int> d3 = 
	for (unsigned int i=0; i < d2.size(); ++i) {
		cout << d2[i] << endl;
	}
	system("pause");
}