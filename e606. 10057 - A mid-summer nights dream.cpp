#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <climits>
using namespace std;
int main()
{
	int n; 
	
	while (cin >> n) {
		vector<int> a;
		
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		int len = a.size();
		int mid;
		int countMedian = 0;
		int z = 0;
		if (len % 2 == 0) {//中位數為兩和/2
			int middle1 = a[n / 2 - 1];
			int middle2 = a[n / 2];
			
			for (int i = middle1; i <= middle2; i++) {
				countMedian += count(a.begin(), a.end(), i);
			}
			z = middle2 - middle1 + 1;
			mid = middle1;
		}
		else {
			mid = a[len / 2];
			countMedian = count(a.begin(), a.end(), mid);
			z = 1;
		}
		
		cout << mid << " " << countMedian << " " <<  z << "\n";
	}
	
}
