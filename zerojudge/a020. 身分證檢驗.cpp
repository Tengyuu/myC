#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	string input;
	while (cin >> input) {
        map<char, int> m = {
            {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14},
            {'F', 15}, {'G', 16}, {'H', 17}, {'I', 34}, {'J', 18},
            {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35},
            {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27},
            {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31},
            {'Z', 33}
        };
        auto it = m.find(input[0]);
        if ( it != m.end()) {
            int a = it->second;
            a = (a % 10) * 9 + (a / 10);

            int b = 0;
            int j = 1;
            for (int i = 8; i > 0; i--) {
                b += (input[j]-'0') * i;
                j++;
            }

            int c = a + b + (input[input.length() - 1]-'0');
            if (c % 10 == 0) {
                cout << "real\n";
            }
            else {
                cout << "fake\n";
            }
        }


	}
}
