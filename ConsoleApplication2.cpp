﻿
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;
string daysfromjj(int month,int day,int year) {
    int monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    bool isleap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    if (isleap)monthdays[1] = 29;
    int days = 0;
    for (int i = 0; i < month - 1; i++) {
        days += monthdays[i];
    }
    days += day - 1;
    
    string weeks[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
    string d;
    d = weeks[days % 7];
        
   
    return d;
}
int main()
{   
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int m, d,y = 2011;
        while (cin >> m >> d) {
            cout << daysfromjj(m, d,y) <<endl;
        }
    }
   
}

