#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int maxline = 0;
    vector<string> vec;
    while(getline(cin,s)){
        vec.push_back(s);
        maxline = max(maxline,(int)s.length());
    }
    for(int i=0;i<maxline;i++){
        for(int j=vec.size()-1;j>=0;j--){
            if(i<vec[j].length()){
                cout<<vec[j][i];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
