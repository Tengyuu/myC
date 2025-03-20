#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	cin.ignore();
	map<string, int> map;
	while (n--) {
		string country,name;
		cin >> country;
		cin.ignore();
		getline(cin, name);
		map[country]++;
	}
	for (auto i : map) {
		cout << i.first << " " << i.second <<"\n";
	}
}

