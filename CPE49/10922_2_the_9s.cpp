#include <iostream>
#include <string>

using namespace std;

int main(){

	string a;
	bool check;
	long long sum,count;
	while(cin>>a){
		if(a=="0"){
			break;
		}
		check=false;
		sum=0;
		count=1;
		for(int i=0;i<a.size();i++){
			sum+=a[i]-'0';
		}
		while(sum>=10){
			if(sum%9!=0){
				break;
			}
			long long Sum=sum;
			sum=0;
			while(Sum>0){
				sum+=Sum%10;
				Sum/=10;
			}
			count++;
		}
		if(sum%9!=0){
			check=true;
		}
		if(check==true){
			cout<<a<<" is not a multiple of 9."<<endl;
		}
		else{
			cout<<a<<" is a multiple of 9 and has 9-degree "<<count<<"."<<endl;
		}
	}

	return 0;
}