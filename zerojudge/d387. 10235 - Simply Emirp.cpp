#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
bool isprime(long long n) {
    if (n == 1)return false;
    if (n == 2)return true;
    if (n % 2 == 0)return false;
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    string input;
    while (cin >> input) {
        string rev = input;
        reverse(rev.begin(), rev.end());
        if (isprime(stoll(input)) && isprime(stoll(rev)) && input!=rev) {
            cout << input << " is emirp.\n";
        }
        else if (isprime(stoll(input))) {
            cout << input << " is prime.\n";
        }
        else {
            cout << input << " is not prime.\n";
        }
    }
    
   

}

