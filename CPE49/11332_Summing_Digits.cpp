#include <iostream>

using namespace std;

int add(int n,int ans){
	if(n<10){
		return n;
	}
	ans=0;
	while(n>0){
		ans+=n%10;
		n/=10;
	}
	return add(ans,0);
}

int main(){

	int n,ans;
	while(cin>>n){
		if(n==0){
			return 0;
		}
		ans=add(n,0);
		cout<<ans<<endl;
	}
	return 0;
}