#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;


int main(){
    int n,m;
    
    while(cin>>n>>m){
        if(m<=1||n<m){
            cout<<"Boring!"<<"\n";
            continue;
        }
        vector<int> ans;

        ans.push_back(n);
        
        
        while(n>1){
            if(n%m!=0){
                ans.clear();
                break;
            }
            n/=m;
            ans.push_back(n);
        }
     
        if(ans.empty()){
            cout<<"Boring!"<<"\n";
        }
        else{
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
    }
}
