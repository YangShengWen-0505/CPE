#include <iostream>
#include <string>

using namespace std;

int main(){

	string n;
	while(cin>>n){
		if(n=="0"){
			break;
		}
		long long even=0,odd=0;
		for(long long i=0;i<n.size();i++){
			if(i%2==0){
				odd+=n[i]-'0';
			}
			else{
				even+=n[i]-'0';
			}
		}
		if((even-odd)%11==0){
			cout<<n<<" is a multiple of 11."<<endl;
	
		}
		else{
			cout<<n<<" is not a multiple of 11."<<endl;
		}
	}
	return 0;
}
