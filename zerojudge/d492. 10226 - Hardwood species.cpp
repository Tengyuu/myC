#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <iomanip>
using namespace std;


int main()
{
    int n;cin>>n;
    cin.ignore();
    string temp;
    getline(cin,temp);
    for(int i=0;i<n;i++){
        unordered_map<string,double> freq;
        string tree;
        int t=0;
        while(getline(cin,tree)){
            if(tree.empty())break;
            freq[tree]++;
            t++;
        }
        vector<pair<string,double>> vec(freq.begin(),freq.end());
        sort(vec.begin(),vec.end());

        for(auto& i:vec){
            double percent =  (i.second/t)*100;
            cout<<i.first<<" "<< fixed << setprecision(4) << percent<<endl;
        }
        if (i < n - 1) {
            cout << endl;
        }
    }
}
