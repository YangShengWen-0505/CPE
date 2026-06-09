#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int n,N,count,max=0,i,flag;
	while(cin>>N>>n){
		flag=0;
		max=0;
		if(N>n){
			int temp=N;
			N=n;
			n=temp;
			flag=1;
		}
		for(i=N;i<=n;i++){
			count=0;
			int I=i;
			while(1){
				count++;
				if(I==1){
					break;
				}
				if(I%2!=0){
					I=3*I+1;
				}
				else{
					I=I/2;
				}
			}
			if(max<count){
				max=count;
			}
		}
		if(flag==1){
			cout<<n<<" "<<N<<" "<<max<<endl;
		}
		else{
			cout<<N<<" "<<n<<" "<<max<<endl;
		}		
	}
	return 0;
}