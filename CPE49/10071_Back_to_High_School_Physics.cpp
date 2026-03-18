#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	int v,t;
	
	while(cin>>v>>t){
		if(t==0){
			cout<<0<<endl;
		}
		else{
			cout<<(2*t)*(2*t)*((float)v/t)/2<<endl;
		}
	}

	return 0;
}