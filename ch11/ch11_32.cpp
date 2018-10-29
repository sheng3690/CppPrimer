#include<map>
#include<string>
#include<iostream>
#include<set>

using namespace std;

int main() {
	std::multimap<string, string> authors{
		{ "alan", "DMA" },{ "pezy", "LeetCode" },{ "alan", "CLRS" },
		{ "wang", "FTP" },{ "pezy", "CP5" },{ "wang", "CPP-Concurrency" } };
	// ��ô��ӡ����������õģ����Ƕ�Ӧ����Ʒ����
	for (auto beg = authors.cbegin(), end = authors.cend(); beg != end;beg++) {
		cout << "authors:" << beg->first << " book:" << beg->second << endl;
	}
	// ��ô��ӡ�����������ֵ���Ķ�����ƷҲ���ֵ���
	map<string, multiset<string>> order_authors;
	for (const auto& author : authors)
		order_authors[author.first].insert(author.second);
	for (const auto& author : order_authors) {
		std::cout << author.first << ": ";
		for (const auto& work : author.second) std::cout << work << " ";
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}