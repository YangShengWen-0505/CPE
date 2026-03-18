#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int a,b,count,temp;
	while(cin>>a>>b){
		if(a==0 && b==0){
			break;
		}
		count=0;
		temp=0;
		while(a>0 || b>0){
			if(a%10+b%10+temp>=10){
				temp=1;
				count+=1;
			}
			else{
				temp=0;
			}
			a/=10;
			b/=10; 
		}
		if(count==0){
			cout<<"No carry operation."<<endl;
		}
		else if(count==1){
			cout<<"1 carry operation."<<endl;
		}
		else{
			cout<<count<<" carry operations."<<endl;
		}
	}
	
	return 0;
}