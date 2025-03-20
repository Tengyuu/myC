#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;


int main(){
    
    double x1,y1,x2,y2,x3,y3,x4,y4;
    while( cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
        double ansx,ansy;
        if(x2==x3 && y2==y3){
            ansx = x4 + (x1-x2);
            ansy = y4 + (y1-y2);
        }
        else if(x1==x3 && y1 ==y3){
            ansx = x4 + (x2-x1);
            ansy = y4 + (y2-y1);
        }
        else if(x1==x4&&y1==y4){
            ansx = x3 + (x2-x1);
            ansy = y3 + (y2-y1);
        }
        else{
            ansx = x3 + (x1-x2);
            ansy = y3 + (y1-y2);
        }
        cout<< fixed << setprecision(3) << ansx <<" " <<ansy <<"\n";
    }



}
