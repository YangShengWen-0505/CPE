#include <iostream>

using namespace std;

bool prime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	
	int n,n1,n2;
	
	while(cin>>n){
		n1=n;
		n2=0;
		if(prime(n1)){
			while(n1>0){
				n2=n2*10+n1%10;
				n1/=10;
			}
			if(prime(n2) && n!=n2){
				cout<<n<<" is emirp."<<endl;
			}
			else{
				cout<<n<<" is prime."<<endl;
			}
		}
		else{
			cout<<n<<" is not prime."<<endl;
		}
	}
	
	return 0;
}