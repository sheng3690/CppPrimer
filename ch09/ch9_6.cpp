#include<iostream>
#include<list>

using namespace std;
int main() {
	list<string> a = { "Milton","Shakespeare","Austen" };
	// ��auto��begin��end���ʹ��ʱ����õĵ�����������������������
	auto it1 = a.begin();
	auto it2 = a.rbegin();
	auto it3 = a.cbegin();
	auto it4 = a.crbegin();
	// ����ʾָ�������������ǣ���õ���������������ָ�����ͣ�����iterator����ת����cosnt_iterator
	list<string>::iterator it5 = a.begin();
	list<string>::const_iterator it5 = a.begin();
	// c��ͷ��cbegin��cend��õĵ�������const_iterator�͵�
	auto i7 = a.cbegin();
	list<string>::const_iterator it8 = a.cbegin();
	
}