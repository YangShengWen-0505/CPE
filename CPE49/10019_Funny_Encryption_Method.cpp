#include <iostream>

using namespace std;

int main(){

	int t,M,m,b1,b2,digit;
	
	cin>>t;
	while(t>0){
		cin>>M;
		m=M;
		b1=0;
		while(m>0){
			if(m%2==1){
				b1+=1;
			}
			m/=2;
		}
		digit=1;
		m=0;
		b2=0;
		while(M>0){
			m+=M%10*digit;
			digit*=16;
			M/=10;
		}
		while(m>0){
			if(m%2==1){
				b2+=1;
			}
			m/=2;
		}
		
		cout<<b1<<" "<<b2<<endl;
	
		t--;
	}

	return 0;
}