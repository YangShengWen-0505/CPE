#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

	double a,s,r,ans1,ans2;
	string b;
	while(cin>>s>>a>>b){
		r=6440+s;
		if(b=="min"){
			a/=60;
		}
		a=a*acos(-1.0)/180;
		ans1=r*a;
		ans2=2*r*sin(a/2);
		printf("%0.6f %0.6f\n",ans1,ans2);
	}

	return 0;
}
