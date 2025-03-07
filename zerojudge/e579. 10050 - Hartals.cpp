#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    int T;cin>>T;
    for(int i=0;i<T;i++){
        unordered_set<int> a;
        int N,P;
        cin>>N>>P;
        for(int j=0;j<P;j++){
            int x;cin>>x;
            int cur = x;
            while(x<=N){
                if(x%7!=0&&x%7!=6){
                    a.insert(x);
                }
                x+=cur;
            }
        }
        cout<<a.size()<<"\n";
    }
}
