#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i < a + 1; i++) {
        cout << string(a-i, '_');
        cout << string(i, '*')<<"\n";

    }

}
