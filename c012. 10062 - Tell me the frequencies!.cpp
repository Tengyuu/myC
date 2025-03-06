#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;


int main(){
    string s;
    while(getline(cin,s)){
        map<char,int> m;
        for(char c:s){
            m[c]++;
        }
        vector<pair<char,int>> vec(m.begin(),m.end());

        sort(vec.begin(),vec.end(),[](const pair<char,int>& a,const pair<char,int>& b){
            return (a.second==b.second)?(a.first>b.first):(a.second<b.second);
        });
        for(auto& i:vec){
            cout<<int(i.first)<<" "<<i.second<<"\n";
        }
        cout<<"\n";
    }
}
