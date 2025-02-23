#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        vector<int> nums(n);
        
        unordered_set<int> diff;
        bool notjolly = false;

        if (n == 1) {
            notjolly = false;
        }
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        for (int i = 1; i < n; i++) {
            int x = (abs(nums[i] - nums[i - 1]));
            if ((x >= 1) && (x <= n - 1)) {
                diff.insert(x);
            }
        }
        if (diff.size() != n - 1) {
            notjolly = true;
        }
        if (notjolly) {
            cout << "Not jolly\n";
        }
        else {
            cout << "Jolly\n";
        }

    }
    
    
}
