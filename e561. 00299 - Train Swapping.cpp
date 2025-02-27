#include<iostream>
#include<vector>

using namespace std;

int bubblesort(vector<int> &a){
    int t=0;
    for(int i=0;i<a.size()-1;i++){
        for(int j= 0;j<a.size()-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                t++;
            }
        }
    }
    return t;
}
int main(){
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int l;cin>>l;
        vector<int> a;
        for(int i=0;i<l;i++){
            int x;cin>>x;
            a.push_back(x);
        }
        int T = bubblesort(a);
        cout << "Optimal train swapping takes " << T<< " swaps.\n";
    }
}
