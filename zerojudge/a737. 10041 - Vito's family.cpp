#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int r;cin>>r;
        vector<int> a(r);
        for(int i=0;i<r;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        
        int mid = 0;
        if( r%2==1){
            mid = a[r/2];
        }
        else{
            mid = (a[(r/2)-1]+a[r/2])/2;
        }

        int sum=0;
        for(int i:a){
            sum+=abs(mid-i);
        }
        cout<<sum<<"\n";
    }
}
