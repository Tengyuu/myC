#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bitset>
using namespace std;
int main()
{
	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		
		bitset<16> x1(N);
		int b1 = x1.count();
		
		int hextodec = 0;
		int len = to_string(N).length();
		for (char c : to_string(N)) {
			hextodec += pow(16, len-- ) * (c - '0');
			
		}
		bitset<32> x2(hextodec);
		int b2 = x2.count();

		/*cout << (N xor b1* b2);*/
		/*cout << x1 << " " << b1 << "\n";
		cout << x2 <<" "<<b2 <<"\n";*/
		cout << b1 << " " << b2 << "\n";
	
	}
}
