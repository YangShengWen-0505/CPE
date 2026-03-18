#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	long long n,x,y,s,d;
	cin>>n;
	while(n>0){
		cin>>s>>d;
		x=(s+d)/2;
		y=s-x;
		if(x<0 || y<0 || s<d || (s+d)%2!=0){
			cout<<"impossible"<<endl;
		}
		else if(x>=y){
			cout<<x<<" "<<y<<endl;
		}
		else{
			cout<<y<<" "<<x<<endl;
		}
		n--;
	}

	return 0;
}