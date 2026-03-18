#include <iostream>
#include <string>

using namespace std;

int GCD(int n1,int n2){
	if(n1%n2==0){
		return n2;
	}
	else{
		return GCD(n2,n1%n2);
	}
}

int main(){
	
	int t,n1,n2,digit,result;
	string s1,s2;
	
	cin>>t;
	for(int j=1;j<=t;j++){
		cin>>s1>>s2;
		digit=1;
		n1=0;
		n2=0;
		for(int i=s1.size()-1;i>=0;i--){
			n1+=(s1[i]-'0')*digit;
			digit*=2;
		}
		digit=1;
		for(int i=s2.size()-1;i>=0;i--){
			n2+=(s2[i]-'0')*digit;
			digit*=2;
		}
		if(n1>=n2){
			result=GCD(n1,n2);
		}
		else{
			result=GCD(n2,n1);
		}
		if(result==1){
			cout<<"Pair #"<<j<<": Love is not all you need!"<<endl;
		}
		else{
			cout<<"Pair #"<<j<<": All you need is love!"<<endl;
		}
		
	}
	
	return 0;
}