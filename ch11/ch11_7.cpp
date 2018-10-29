#include<map>
#include<vector>
#include<iostream>
#include<string>

using namespace std;

void AddFamily(map < string, vector<string>>& family_map,string family_name) {
	family_map[family_name] = {};
}
void AddChild(map<string, vector<string>>& family_map, string family_name,string child_name) {
	family_map[family_name].push_back(child_name);
}
int main() {
	map<string, vector<string>> family_map;
	// add a new family
	AddFamily(family_map, "sheng");
	// add a chile
	AddChild(family_map,"sheng", "xinde");
	AddChild(family_map, "sheng", "yixia");

	for (const auto& child : family_map) {
		cout << "family: " << child.first << endl;
		cout << "chile name:" << endl;
		for (int i = 0; i < child.second.size(); ++i) {
			cout << child.first << " " << child.second[i] << endl;;
		}
	}
	system("pause");
	return 0;
}