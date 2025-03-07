

#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int fun(int n) {
	int length = 1;
	while (n != 1) {
		if (n % 2 != 0) {
			n = 3 * n + 1;
		}
		else {
			n /= 2;
		}
		length++;
	}
	return length;
}
int main()
{
	int i, j;
	while (cin >> i >> j) {
		int start = min(i, j);
		int end = max(i, j);
		int lenmax = 0;
		for (int k = start; k <= end; k++) {
			lenmax = max(lenmax,fun(k));
		}
		cout << i << " " << j << " " << lenmax << endl;
	}
}

