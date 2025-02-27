
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    string a,b;
    while(cin>>a>>b){
        if(a=="0"&&b=="0")break;
        int t=0;
       
        int carry = 0, count = 0;
        int lenA = a.length(), lenB = b.length();
        int maxLen = max(lenA, lenB);

        int carryOver = 0;
        for (int i = 0; i < maxLen; i++) {
            int digitA = (i < lenA) ? (a[lenA - 1 - i] - '0') : 0;
            int digitB = (i < lenB) ? (b[lenB - 1 - i] - '0') : 0;
            int sum = digitA + digitB + carryOver;
            
            if (sum > 9) {
                carryOver = 1;
                count++;
            } else {
                carryOver = 0;
            }

            
        }
        if(count==1){
            cout << count << "carry operation." << endl;
        }
        else if(count == 0){
            cout<<"No carry operation.\n";
        }
        else{
            cout<< count <<" carry operations.\n";
        }
        
    }
}
