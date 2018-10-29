#include<sstream>
#include<iostream>
#include<map>
#include<string>
#include<fstream>

using namespace std;
// 以后观察别人的项目代码，看看提前声明的习惯怎么做的
// 读取映射规则文档，返回一个map
map<string, string> buildMap(ifstream &);
// 转换函数，根据规则的map将输入的单词进行转换
const string &transform(const string &, const map<string, string> &);
// 管理单词转换过程的程序，读取规则文件和输入文件，
void word_transform(ifstream &map_file,ifstream &input) {
	auto trans_map = buildMap(map_file);
	string line;
	// fstream对getline函数进行了重载，第一个参数可以是fstream
	while (getline(input, line)) {
		// string输入流
		istringstream string_stream(line);
		string word;
		bool firstword = true;
		while (string_stream >> word) {
			if (firstword) {
				firstword = false;
			}
			else {
				cout << " ";
			}
			cout << transform(word, trans_map);
		}
		cout << endl;
	}
	
}

const string &transform(const string &word, const map<string, string> &trans_map) {
	auto iter = trans_map.find(word);
	if (iter != trans_map.end()) {
		return iter->second;
	}
	else {
		return word;
	}
}

map<string,string> buildMap(ifstream &map_file) {
	map<string, string> trans_map;
	string key;
	string value;
	while (map_file>>key && getline(map_file, value)) {
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for" + key);
	}
	return trans_map;
}


int main() {
	ifstream trans_map("trans_map.txt"), input("input.txt");
	if (trans_map && input) {
		word_transform(trans_map, input);
	}
	else {
		std::cerr << "can't find the documents." << std::endl;
	}
	system("pause");
}