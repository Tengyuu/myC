#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<char,int>& a,const pair<char,int>& b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second > b.second;
	}
}
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	map<char, int> map;
	while (n--) {
		string s;
		getline(cin, s);
		for (char c : s) {
			if (isalpha(c)) {
				c = toupper(c);
				map[c]++;
			}
		}
	}
	vector<pair<char, int>> vec(map.begin(), map.end());
		
	sort(vec.begin(), vec.end(),cmp);
	for (auto i : vec) {
		cout << i.first << " " << i.second << "\n";
	}
}

