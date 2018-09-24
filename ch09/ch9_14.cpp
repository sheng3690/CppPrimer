#include<iostream>
#include<string>
#include<list>
#include<vector>

using namespace std;

int main() {
	list<char*> lc = { "1","2" };
	vector<string> vs;
	vs.assign(lc.begin(), lc.end());
}