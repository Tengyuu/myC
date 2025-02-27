
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool cmp(const pair<char,int>& a,const pair<char,int>& b){
    if(a.second!=b.second){
        return a.second>b.second;
    }
    else{
        return a.first<b.first;
    }

}

int main()
{
    int n;cin>>n;
    cin.ignore();
    string s;
    string ss = "";
    unordered_map<char,int> freq;
    for(int i=0;i<n;i++){
        getline(cin,s);
        ss+=s;
    }
    
    for(char c:ss){
        if(isalpha(c)){
            c = toupper(c);
            freq[c]++;
        }
    }
    vector<pair<char,int>> a(freq.begin(),freq.end()); 
    sort(a.begin(),a.end(),cmp);

    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
