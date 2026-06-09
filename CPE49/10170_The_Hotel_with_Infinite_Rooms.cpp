#include <iostream>

using namespace std;

int main(){
	
	long long a,b,i,sum;
	while(cin>>a>>b){
		sum=0;
		for(i=a;sum<b;i++){
			sum+=i;
		}
		cout<<i-1<<endl;
	}

	return 0;
}