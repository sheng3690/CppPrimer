#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main() {
	string word;
	map<string, int> word_count;
	while (cin >> word) {
		++word_count[word];
	}
	/*
	for (const auto &w : word_count) {
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? "times" : "time") << endl;
	}
	*/
	auto map_it = word_count.begin();
	cout << map_it->first <<" "<<map_it->second << endl;
	cout << (*map_it).first << " " << (*map_it).second << endl;
	system("pause");
	return 0;
}