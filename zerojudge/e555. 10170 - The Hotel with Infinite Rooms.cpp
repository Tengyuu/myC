

#include <iostream>
using namespace std;
int main()
{
	long long s, d;
	while (cin >> s >> d) {
		while (d > 0) {
			d -= s++;
		}
		s--;
		cout << s <<"\n";
	}
}


