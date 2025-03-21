#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main(){
	
	int n;
	while(cin>>n && n){
		bitset<32> b(n);
		string bstr = b.to_string();
		bstr = bstr.substr(bstr.find('1'));
		int parity = b.count();
		
		cout<<"The parity of "<<bstr<<" is " <<parity<<" (mod 2).\n";
	}
}
