#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string a;
	long long int sum,max;
	
	while(cin>>a){
		sum=0;
		max=0;
		for(int i=0;i<a.size();i++){
			if('0'<=a[i] && a[i]<='9'){
				sum+=a[i]-'0';
				if(max<a[i]-'0'){
					max=a[i]-'0';
				}
			}
			else if('A'<=a[i] && a[i]<='Z'){
				sum+=a[i]-'A'+10;
				if(max<a[i]-'A'+10){
					max=a[i]-'A'+10;
				}
			}
			else if('a'<=a[i] && a[i]<='z'){
				sum+=a[i]-'a'+36;
				if(max<a[i]-'a'+36){
					max=a[i]-'a'+36;
				}
			}
		}
		if(a.size()==1 && a[0]=='0'){
			cout<<2<<endl;
		}
		else if(a.size()==1 || (a.size()==2 && !('0'<=a[0] && a[0]<='9') && !('A'<=a[0] && a[0]<='Z') && !('a'<=a[0] && a[0]<='z'))){
			cout<<sum+1<<endl;
		}
		else{	
			for(int i=2;i<=62;i++){
				if(i>=max && sum%i==0){
					sum=i;
				}
			}
			if(sum<=62){
				cout<<sum+1<<endl;
			}
			else{
				cout<<"such number is impossible!"<<endl;
			}
		}
	}
	
	return 0;
}