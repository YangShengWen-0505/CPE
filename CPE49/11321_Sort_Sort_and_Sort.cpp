#include <iostream>

using namespace std;

int main(){
	int N,t,temp,n[10000],m;
	
	while(1){
		cin>>N>>m;
		cout<<N<<" "<<m<<endl;
		if(N==0 && m==0){
			return 0;
		}
		for(int i=0;i<N;i++){
			cin>>t;
			n[i]=t;
		}
		for(int i=0;i<N-1;i++){
			for(int j=0;j<N-1-i;j++){
				if(n[j]%m>n[j+1]%m){
					temp=n[j+1];
					n[j+1]=n[j];
					n[j]=temp;
				}
				else if(n[j]%m == n[j+1]%m){
					if(n[j]%2==0 && n[j+1]%2==0){
						if(n[j+1]<n[j]){
							temp=n[j+1];
							n[j+1]=n[j];
							n[j]=temp;
						}
					}
					else if(n[j]%2!=0 && n[j+1]%2!=0){
						if(n[j+1]>n[j]){
							temp=n[j+1];
							n[j+1]=n[j];
							n[j]=temp;
						}
					}
					else{
						if(n[j]%2==0 && n[j+1]%2!=0){
							temp=n[j+1];
							n[j+1]=n[j];
							n[j]=temp;
						}
					}
				}
			}
		}
		for(int i=0;i<N;i++){
			cout<<n[i]<<endl;
		}
	}
}