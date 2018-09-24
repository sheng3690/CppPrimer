#include<iostream>
#include<list>

using namespace std;
int main() {
	list<string> a = { "Milton","Shakespeare","Austen" };
	// 当auto和begin，end结合使用时，获得的迭代器类型依赖于容器类型
	auto it1 = a.begin();
	auto it2 = a.rbegin();
	auto it3 = a.cbegin();
	auto it4 = a.crbegin();
	// 当显示指定迭代器类型是，获得迭代器类型依赖于指定类型，但是iterator不能转换成cosnt_iterator
	list<string>::iterator it5 = a.begin();
	list<string>::const_iterator it5 = a.begin();
	// c开头的cbegin和cend获得的迭代器是const_iterator型的
	auto i7 = a.cbegin();
	list<string>::const_iterator it8 = a.cbegin();
	
}