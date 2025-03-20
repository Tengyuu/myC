#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;

map<char, set<int>> finger_map = {
    {'c', {2, 3, 4, 7, 8, 9, 10}},
    {'d', {2, 3, 4, 7, 8, 9}},
    {'e', {2, 3, 4, 7, 8}},
    {'f', {2, 3, 4, 7}},
    {'g', {2, 3, 4}},
    {'a', {2, 3}},
    {'b', {2}},
    {'C', {3}},
    {'D', {1, 2, 3, 4, 7, 8, 9}},
    {'E', {1, 2, 3, 4, 7, 8}},
    {'F', {1, 2, 3, 4, 7}},
    {'G', {1, 2, 3, 4}},
    {'A', {1, 2, 3}},
    {'B', {1, 2}}
};
int main()
{
	int n;
	cin >> n;
    cin.ignore();
	while (n--) {
		string input;
		getline(cin,input);
        vector<int> press(10, 0);
        set<int> prev_press;
        for (char c : input) {
            set<int> cur_press = finger_map[c];

            for (int i : cur_press) {
                if (prev_press.find(i) == prev_press.end()) {
                    press[i - 1]++;
                }
            }
            prev_press = cur_press;
        }
        for (int i = 0; i < 10; i++) {
            cout << press[i] <<" ";
        }
        cout << "\n";
	}
   

}

