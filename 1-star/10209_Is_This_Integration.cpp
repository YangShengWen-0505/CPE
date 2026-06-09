#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double PI=acos(-1);
	double SQRT3=sqrt(3);
	double a,x,y,z;
	
	while(cin>>a){
		z=2.0*(PI*a*a*(60.0/360.0))-((a*((a*(1.0/2.0))*SQRT3))/2.0)-(a*a-2.0*(a*a-(PI*a*a*(1.0/4.0))));
		y=((a*a-4.0*z)-(a*a-2.0*(a*a-(PI*a*a*(1.0/4.0)))))/2.0;
		x=a*a-4.0*y-4.0*z;
		
		printf("%0.3f %0.3f %0.3f\n",x,4.0*y,4.0*z);	
	}
	return 0;
}