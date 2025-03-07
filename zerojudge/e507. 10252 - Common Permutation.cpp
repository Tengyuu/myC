#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <iomanip>
using namespace std;


int main()
{
    string s1,s2;
    while(cin>>s1>>s2){
        vector<char> vec1(s1.begin(),s1.end());
        vector<char> vec2(s2.begin(),s2.end());
        vector<char> result;
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        int i=0,j=0;
        while(i<vec1.size()&&j<vec2.size()){
            if(vec1[i]==vec2[j]){
                result.push_back(vec1[i]);
                i++;
                j++;
            }
            else if(vec1[i]<vec2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        for(char c:result){
            cout<<c;
        }
        cout<<endl;
    }

}
