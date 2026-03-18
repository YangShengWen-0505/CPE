#include <iostream>

using namespace std;

int main(){
	
	long long int number,kuti=0,lakh=0,hajar=0,shata=0,count=0,temp,k;
	
	while(cin>>number){
		kuti=0;
		lakh=0;
		hajar=0;
		shata=0;
		temp=0;
		k=0;
		count++;
		if(count<10){
			cout<<"   ";
		}
		else if(count<100){
			cout<<"  ";
		}
		else if(count<1000){
			cout<<" ";
		}
		cout<<count<<". ";
		if(number>=10000000){
			kuti=number/10000000;
			number%=10000000;
			if(kuti>=100){
				k=kuti;
				if(kuti>=10000000){
					temp=kuti/10000000;
					kuti%=10000000;
					cout<<temp<<" kuti";
				}
				if(kuti>=100000){
					lakh=kuti/100000;
					kuti%=100000;
					if(temp!=0)
						cout<<" ";
					cout<<lakh<<" lakh";
				}
				if(kuti>=1000){
					hajar=kuti/1000;
					kuti%=1000;
					if(temp!=0 || lakh!=0)
						cout<<" ";
					cout<<hajar<<" hajar";
				}
				if(kuti>=100){
					shata=kuti/100;
					kuti%=100;
					if(temp!=0 || lakh!=0 || hajar!=0)
						cout<<" ";
					cout<<shata<<" shata";
				}
				if(temp!=0 || lakh!=0 || hajar!=0 || shata!=0)
						cout<<" ";
				if(kuti==0){
					cout<<"kuti";
				}
			}
		}
		
		lakh=0;
		hajar=0;
		shata=0;
		temp=0;
		
		if(number>=100000){
			lakh=number/100000;
			number%=100000;
		}
		if(number>=1000){
			hajar=number/1000;
			number%=1000;
		}
		if(number>=100){
			shata=number/100;
			number%=100;
		}

		if(kuti!=0){
			cout<<kuti<<" kuti";
		}
		if(lakh!=0){
			if(kuti!=0 || k!=0)
				cout<<" ";
			cout<<lakh<<" lakh";
		}
		if(hajar!=0){
		if(kuti!=0 || lakh!=0 || k!=0)
				cout<<" ";
			cout<<hajar<<" hajar";
		}
		if(shata!=0){
			if(kuti!=0 || lakh!=0 || hajar!=0 || k!=0)
				cout<<" ";
			cout<<shata<<" shata";
		}
		if((k==0 && kuti==0 && lakh==0 && hajar==0 && shata==0 &&  number==0) || number!=0){
			if(kuti!=0 || lakh!=0 || hajar!=0 || shata!=0 || k!=0)
				cout<<" ";
			cout<<number;
		}
		cout<<endl;
	}

	return 0;	
}