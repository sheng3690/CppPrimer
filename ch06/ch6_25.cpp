#include<iostream>
#include<string>
// ��θ�main�������ݲ���������������������������������ѡ��
int main(int argc, char **argv) {
	std::string str;
	for (int i = 0; i != argc; i++) {
		str += argv[i];
		str += " ";
	}
	std::cout << str << std::endl;
}