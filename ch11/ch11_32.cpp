#include<map>
#include<string>
#include<iostream>
#include<set>

using namespace std;

int main() {
	std::multimap<string, string> authors{
		{ "alan", "DMA" },{ "pezy", "LeetCode" },{ "alan", "CLRS" },
		{ "wang", "FTP" },{ "pezy", "CP5" },{ "wang", "CPP-Concurrency" } };
	// 这么打印作者是排序好的，但是对应的作品不是
	for (auto beg = authors.cbegin(), end = authors.cend(); beg != end;beg++) {
		cout << "authors:" << beg->first << " book:" << beg->second << endl;
	}
	// 这么打印不仅作者是字典序的而且作品也是字典序
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