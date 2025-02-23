#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;
int main()
{
    string s;
    bool start = true;
    while (getline(cin, s)) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '"') {
                if (start) {
                    cout << "``";
                    start = false;
                }
                else {
                    cout << "''";
                    start = true;
                }
            }
            else cout << s[i];
        }
        cout << endl;
    }
}
