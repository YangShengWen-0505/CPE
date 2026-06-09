#include <iostream>

using namespace std;

int main(){
	
	int n[3000],N,i,flag,count[3001];
	
	while(cin>>N){
		flag=0;
		for(i=0;i<N;i++){
			count[i]=0;
			cin>>n[i];
		}
		for(i=0;i<N-1;i++){
			if(abs(n[i]-n[i+1])>=N || abs(n[i]-n[i+1])==0){
				flag=1;
				break;
			}
			count[abs(n[i]-n[i+1])]=1;
		}
		for(i=1;i<N;i++){
			if(count[i]==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<"Jolly"<<endl;
		}
		else{
			cout<<"Not jolly"<<endl;
		}
	}
	
	return 0;
}