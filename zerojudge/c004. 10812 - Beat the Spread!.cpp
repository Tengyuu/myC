#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	while (n--) {
		int s, d; cin >> s >> d;
		if (s < d || (s-d)%2!=0) { 
			cout << "impossible\n";
			continue;
		}
		int x, y;
		x = (s + d) / 2;
		y = s - x;
		cout << x << " " << y << "\n";
	}
}

