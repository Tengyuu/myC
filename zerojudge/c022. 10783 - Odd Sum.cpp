#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int num = 1;
	while (n--) {
		int a, b; cin >> a >> b;
		int sum = 0;
		for (int i = a; i <= b; i++) {
			if (i % 2 != 0) {
				sum += i;
			}
		}
		cout << "Case " << num++ << ": " << sum << "\n";
	}
}

