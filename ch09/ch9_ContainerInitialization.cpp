#include<iostream>
#include<list>
#include<vector>
#include<forward_list>
using namespace std;

int main() {
	list<string> authors = { "Milton","Shajespeare","Austen" };
	vector<const char*> articles = { "a","aa","aaa" };

	forward_list<string> words(articles.begin(), articles.end());
}