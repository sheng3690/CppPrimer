#include<map>
#include<string>
#include<iostream>

using namespace std;

int main() {
	multimap<string, string> authors;
	// insert
	authors.insert({ "Barth,John","Sot-Weed Factor" });
	authors.insert({ "Barth,John","Lost in the Funhouse" });
	// print
	string search_item("Barth,John");
	// 1
	auto entries = authors.count("Barth,John");
	auto iter = authors.begin();
	while (entries != 0) {
		cout << "author:" << iter->first << " book:" << iter->second << endl;
		iter++;
		entries--;
	}
	// 2
	for (auto beg = authors.lower_bound("Barth,John"), end = authors.upper_bound("Barth,John"); beg != end; beg++) {
		cout << "author:" << beg->first << " book:" << beg->second << endl;
	}
	// 3
	for (auto pos = authors.equal_range("Barth,John"); pos.first != pos.second; pos.first++) {
		cout << "author:" << pos.first->first << " book:" << pos.first->second << endl;
	}

	// delete
	string delete_author = "Barth,John";
	string delete_book = "Sot-Weed Factor";
	for (auto pos = authors.equal_range("Barth,John"); pos.first != pos.second;) {
		
		if (pos.first->second == delete_book) {
			pos.first = authors.erase(pos.first);//erase接受迭代器的位置，删除其对应元素，并返回该元素下一位置的迭代器
		}
		else
		{
			pos.first++;
		}
	}
	for (auto pos = authors.equal_range("Barth,John"); pos.first != pos.second; pos.first++) {
		cout << "author:" << pos.first->first << " book:" << pos.first->second << endl;
	}
	system("pause");
	return 0;
}