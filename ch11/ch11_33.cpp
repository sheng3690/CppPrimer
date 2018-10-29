#include<sstream>
#include<iostream>
#include<map>
#include<string>
#include<fstream>

using namespace std;
// �Ժ�۲���˵���Ŀ���룬������ǰ������ϰ����ô����
// ��ȡӳ������ĵ�������һ��map
map<string, string> buildMap(ifstream &);
// ת�����������ݹ����map������ĵ��ʽ���ת��
const string &transform(const string &, const map<string, string> &);
// ������ת�����̵ĳ��򣬶�ȡ�����ļ��������ļ���
void word_transform(ifstream &map_file,ifstream &input) {
	auto trans_map = buildMap(map_file);
	string line;
	// fstream��getline�������������أ���һ������������fstream
	while (getline(input, line)) {
		// string������
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