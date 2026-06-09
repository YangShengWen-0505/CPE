#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	long long n,a,b,count=0;
	
	cin>>n;
	while(n>0){
		count++;
		int sum=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(i%2==1){
				sum+=i;
			}
		}
		cout<<"Case "<<count<<": "<<sum<<endl;
		n--;
	}

	return 0;
}