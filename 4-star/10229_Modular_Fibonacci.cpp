
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	long long int n,m;
	
	while(cin>>n>>m){
		long long int mod=(1ll<<m);
		long long int out[2]={1,0};
		long long int out2[2];
		long long int A[2][2]={{1,1},{1,0}};
		long long int A2[2][2];
		if(n==0){
			cout<<0<<endl;
		}
		else if(n==1){
			cout<<1<<endl;
		}
		else{
		n-=1;
			while(n>0){
				if(n%2==1){
					out2[0]=(out[0]*A[0][0]+out[1]*A[0][1])%mod;
					out2[1]=(out[0]*A[1][0]+out[1]*A[1][1])%mod;
					out[0]=out2[0];
					out[1]=out2[1];
					n--;
				}
				else{
					A2[0][0]=(A[0][0]*A[0][0]+A[0][1]*A[1][0])%mod;
					A2[0][1]=(A[0][0]*A[0][1]+A[0][1]*A[1][1])%mod;
					A2[1][0]=(A[1][0]*A[0][0]+A[1][1]*A[1][0])%mod;
					A2[1][1]=(A[1][0]*A[0][1]+A[1][1]*A[1][1])%mod;
					A[0][0]=A2[0][0];
					A[0][1]=A2[0][1];
					A[1][0]=A2[1][0];
					A[1][1]=A2[1][1];
					n/=2;
				}
			}
			cout<<out[0]<<endl;
		}
	}

	return 0;
}

