#include<iostream>
#include<string>
// 如何给main函数传递参数，调试中属性设置中有命令参数这个选项
int main(int argc, char **argv) {
	std::string str;
	for (int i = 0; i != argc; i++) {
		str += argv[i];
		str += " ";
	}
	std::cout << str << std::endl;
}