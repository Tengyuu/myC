#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include<unordered_set>;
using namespace std;

int main() {

	int n;
	int cnt = 1;
	while (cin >> n) {
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}
		bool isincrease = true;
		for (int i = 1; i < n; i++) {
			if (vec[i] <= vec[i - 1]) {
				isincrease = false;
				break;
			}
		}
		if (!isincrease) {
			cout << "Case #" << cnt++ << ":";
			cout << " It is not a B2-Sequence.\n";
			continue;
		}

		bool isb2 = true;
		unordered_set<int> sumSet;
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				int sum = vec[i] + vec[j];
				if (sumSet.find(sum) != sumSet.end()) {
					isb2 = false;
					break;
				}
				sumSet.insert(sum);
			}
			if (!isb2)break;
		}
		cout << "Case #" << cnt++ << ":";
		if (isb2) {
			cout << " It is a B2-Sequence.\n";
		}
		else {
			cout << " It is not a B2-Sequence.\n";
		}
	}
	
		
}
