#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

	long long int t,r,s[500],mid,total;
	cin>>t;
	while(t>0){
		cin>>r;
		total=0;
		for(int i=0;i<r;i++){
			cin>>s[i];
		}
		sort(s+0,s+r);
		mid=s[r/2];
		for(int i=0;i<r;i++){
			total+=abs(mid-s[i]);
		}
		cout<<total<<endl;
		t--;
	}
	return 0;
}