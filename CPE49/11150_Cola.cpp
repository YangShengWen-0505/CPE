#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	long long n,full,empty,change,sum;
	
	while(cin>>n){
		full=n;
		empty=full;
		while(empty>=3){
			change=empty/3;
			empty=empty-change*3+change;
		}
		full=n+empty;
		empty=full;
		sum=n;
		while(empty>=3){
			change=empty/3;
			sum+=change;
			empty=empty-change*3+change;
		}
		cout<<sum<<endl;
	}
	
	return 0;
}