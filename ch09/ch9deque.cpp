#include<iostream>
#include<deque>

using namespace std;

int main() {
	// 初始化
	// 1.通过初始化列表
	deque<int> d1 = { 1,2,3 };
	// 2. 通过指定容器大小参数
	deque<int> d2(10, 1);
	// 3. 通过
	deque<int> d3 = 
	for (unsigned int i=0; i < d2.size(); ++i) {
		cout << d2[i] << endl;
	}
	system("pause");
}