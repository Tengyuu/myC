#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int b = 1; b < a + 1; b++) {
        cout << string(a-b, '_');
        cout << string(2*(b-1) + 1, '*');
        cout<<string(a-b,'_')<<"\n";
    }

}
