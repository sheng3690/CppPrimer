#include<memory>
#include<string>
#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main() {
	shared_ptr<string> p1;//�������ָ��string��shared_ptr,Ĭ�ϳ�ʼ��Ϊ��ָ��
	shared_ptr<list<int>> p2;
	if (p1&&p1->empty()) {
		*p1 = "hi";
	}
	shared_ptr<int> p3 = make_shared<int>(42);//ָ��һ��ֵΪ42��int��shared_ptr
	shared_ptr<string> p4 = make_shared<string>(10, '9');
	shared_ptr<int> p5 = make_shared<int>();
	auto p6 = make_shared<vector<string>>();

	auto p = make_shared <int>(42);// pָ��Ķ���ֻ��pһ��������
	auto q(p);//pͬqָ��ͬһ�����󣬸ö���������������
	auto r = make_shared<int>(42); 
	r = q;// ��r��ֵ������ָ����һ����ַ
	// ����qָ���������ü���
	// �ݼ�rԭ��ָ��Ķ�������ü���
	// rԭ��ָ��Ķ�����û�������ߣ����Զ��ͷ�
}