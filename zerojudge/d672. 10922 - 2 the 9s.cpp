#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int fun(int sum) {
	int degree = 1;
	int temp = sum;
	while (temp != 9) {
		int x = 0;
		string s = to_string(temp);
		for (char c : s) {
			x += c - '0';
		}
		temp = x;
		degree++;
	}
	return degree;
}
int main()
{
	string s;
	while (cin >> s) {

		int sum = 0;
		if (s == "0") {
			break;
		}
		for (char c : s) {
			sum += c - '0';
		}
		if (sum % 9 == 0) {

			int degree = fun(sum);
			cout << s << " is a multiple of 9 and has 9-degree " << degree << ".\n";
		}
		else {
			cout << s << " is not a multiple of 9.\n";
		}
	}
}

