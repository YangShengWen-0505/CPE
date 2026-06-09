#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double l,w,x,small;
	
	while(cin>>l>>w){
		x=((4.0*l+4.0*w)-sqrt((4.0*l+4.0*w)*(4.0*l+4.0*w)-(48.0*l*w)))/24.0;
		if(l<=w)
			small=l/2;
		else
			small=w/2;
		printf("%0.3f 0.000 %0.3f\n",x,small);
	}
	
	return 0;
}