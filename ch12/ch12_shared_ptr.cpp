#include<memory>
#include<string>
#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main() {
	shared_ptr<string> p1;//定义可以指向string的shared_ptr,默认初始化为空指针
	shared_ptr<list<int>> p2;
	if (p1&&p1->empty()) {
		*p1 = "hi";
	}
	shared_ptr<int> p3 = make_shared<int>(42);//指向一个值为42的int的shared_ptr
	shared_ptr<string> p4 = make_shared<string>(10, '9');
	shared_ptr<int> p5 = make_shared<int>();
	auto p6 = make_shared<vector<string>>();

	auto p = make_shared <int>(42);// p指向的对象只有p一个引用者
	auto q(p);//p同q指向同一个对象，该对象有两个引用者
	auto r = make_shared<int>(42); 
	r = q;// 给r赋值，令它指向另一个地址
	// 递增q指向对象的引用计数
	// 递减r原来指向的对象的引用计数
	// r原来指向的对象已没有引用者，会自动释放
}