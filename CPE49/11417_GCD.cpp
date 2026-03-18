#include <iostream>

using namespace std;

int GCD(int i,int j){
	if(i%j==0){
		return j;
	}
	else{
		return GCD(j,i%j);
	}
}

int main(){

	int i,j,G,N;
	while(cin>>N){
	G=0;
		if(N==0){
			return 0;
		}
		for(i=1;i<N;i++){
			for(j=i+1;j<=N;j++){
				G+=GCD(i,j);
			}
		}
		cout<<G<<endl;
	}

	return 0;
}