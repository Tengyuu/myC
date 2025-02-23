#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int m;
bool cmp(const int& a, const int& b) {
    if (a % m != b % m) {
        return a % m < b % m;
    }
    bool OddA = (a % 2 != 0);
    bool OddB = (b % 2 != 0);
    if (OddA && !OddB)return true;
    if (!OddA && OddB)return false;

    if (OddA && OddB) {
        return a > b;
    }
    else {
        return a < b;
    }
}
int main()
{
    int n;
    while (cin >> n >> m) {
        cout << n << " " << m << endl;
        if (n == 0 && m == 0) {
            break;
        }
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), cmp);
        for (int& i : a) {
            cout << i << endl;
        }
    }
}
