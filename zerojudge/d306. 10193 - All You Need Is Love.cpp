#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;


int main(){
    
    int N;
    int cnt =1;
    cin>>N;
    while(N--){
        
        string S,L;
        cin>>S>>L;
        cout<<"Pair #"<< cnt++ << ": ";
        if(S[0]=='0' || L[0]=='0'){
            cout<<"Love is not all you need!"<<"\n";
            continue;
        }
        long long decimal1 = stoll(S,nullptr,2);
        long long decimal2 = stoll(L,nullptr,2);
        
        if (__gcd(decimal1, decimal2) > 1) {
            cout << "All you need is love!" << "\n";
        } else {
            cout << "Love is not all you need!" << "\n";
        }
    }
}
