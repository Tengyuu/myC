#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;



int main()
{
   
    int n;
    cin >>n;
    
    for(int i=0;i<n;i++){
        vector<int> a;
        int m,t=0;
        cin>>m;
        
        for(int j=0;j<m;j++){
            
            int x;cin>>x;
            a.push_back(x);
           


        }
        sort(a.begin(),a.end());
        int mid =0;
        if(m%2==1){
            mid = a[m/2];
        }
        else if (m%2==0){
            mid = (a[m/2]+a[m/2-1])/2;
        }
        
        
        for(int i:a){
            t += abs(mid-i);
            
        }
        cout<<t<<endl;
    }
    
    
}
