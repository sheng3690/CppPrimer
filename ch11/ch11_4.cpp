#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

void WordCount(map<string, size_t>& m) {
	string word;
	while (cin >> word) {
		for (auto& ch : word) ch = tolower(ch);
		// According to the erase-remove idiom
		word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
		++m[word];
	}
	for (const auto &w : m) {
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? "times" : "time") << endl;
	}
}
int main() {
	map < string, size_t> m;
	WordCount(m);
	return 0;
}