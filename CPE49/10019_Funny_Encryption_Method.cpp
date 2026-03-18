#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int t,n,x1,x2,b,b1,b2,digit;
	
	cin>>t;
	while(t>0){
		
		cin>>n;
		x1=n;
		b1=0;
		while(x1>1){
			if(x1%2==1){
				b1++;
			}
			x1/=2;
		}
		b1++;
		x2=n;
		digit=1;
		b=0;
		b2=0;
		while(x2>0){
			b+=(x2%10)*digit;
			digit*=16;
			x2/=10;
		}
		while(b>1){
			if(b%2==1){
				b2++;
			}
			b/=2;
		}
		b2++;
		cout<<b1<<" "<<b2<<endl;
		
		t--;
	}
	
	return 0;
}