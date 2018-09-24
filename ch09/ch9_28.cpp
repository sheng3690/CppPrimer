#include<iostream>
#include<forward_list>
#include<string>
#include<vector>
using namespace std;

void serchString1AndInsertString2(forward_list<string> &fls, string string1, string string2){
	auto prev = fls.before_begin();
	auto begin = fls.begin();
	auto end = fls.end();
	while (begin != end) {
		if (*begin == string1) {
			fls.insert_after(begin,string2);
			return;
		}
		else {
			begin++;
			prev++;
		}
	}
	fls.insert_after(prev, string2);
		
}
int main() {
	forward_list<string> fls = { "a","b","d" };
	string string1 = "a";
	string string2 = "i";
	serchString1AndInsertString2(fls, string1, string2);
	for (auto i : fls) cout << i << " ";
	cout << endl;
	system("pause");
}
