#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const string a[]= {"east","south","west","north"};

int main(){
    
    int n;
    while(cin>>n && n){

        int top = 1, bottom = 6, north = 2, south = 5, west = 3, east = 4;
        while( n--){
            string command;
            cin>>command;
            if(command == a[0]){
                int temp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            }
            else if(command == a[2]){
                int temp = top;
                top = east;
                east =bottom;
                bottom = west;
                west = temp;            }
            else if(command == a[1]){
                int temp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = temp;

            }
            else if(command == a[3]){
                int temp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = temp;
            }
        }
        cout << top <<"\n";        
    }
    



}
