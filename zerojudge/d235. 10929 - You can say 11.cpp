#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	string n;
	while(cin>>n){
		if(n=="0")break;
	
		int oddsum=0,evensum=0;
		for(int i =0;i<n.length();i++){
			if(i%2==0){
				evensum+=n[i]-'0';
			}
			else{
				oddsum+=n[i]-'0';
			}	
			
		}
		
		if((oddsum-evensum)%11==0){
			cout<< n <<" is a multiple of 11.\n";
		}
		else{
			cout<< n <<" is not a multiple of 11.\n";
		}
	}
}

