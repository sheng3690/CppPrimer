#include<iostream>
#include<string>
using std::string;
string::size_type find_char(const string &s, char c, string::size_type occurs) {
	auto pos = s.size();
	occurs = 0;
	for (decltype(pos) i = 0; i < s.size(); ++i) {
		if (s[i] == c) {
			if (pos == s.size()) {
				pos = i;
			}
			++occurs;
		}
	}
	return pos;
}