#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

	int n;
	while (cin >> n) {
		int total = n;
		int empty = n;
		while (empty >= 3) {
			int newdrink = empty / 3;
			total += newdrink;
			empty = empty % 3 + newdrink;
		}
		if (empty == 2) {
			total += 1;
		}
		cout << total << "\n";
	}
		
}
