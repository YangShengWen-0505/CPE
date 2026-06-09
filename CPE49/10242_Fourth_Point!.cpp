#include <iostream>

using namespace std;

int main(){

	double x1,y1,x2,y2,x3,y3,x4,y4,sx1,sy1,sx2,sy2,sx3,sy3,sx4,sy4;
	
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
		if(x1==x4 && y1==y4){
			sx1=x2;
			sy1=y2;
			sx2=x1;
			sy2=y1;
			sx3=x3;
			sy3=y3;
		}
		else if(x1==x3 && y1==y3){
			sx1=x2;
			sy1=y2;
			sx2=x3;
			sy2=y3;
			sx3=x4;
			sy3=y4;
		}
		else if(x2==x4 && y2==y4){
			sx1=x1;
			sy1=y1;
			sx2=x2;
			sy2=y2;
			sx3=x3;
			sy3=y3;	
		}
		else if(x2==x3 && y2==y3){
			sx1=x1;
			sy1=y1;
			sx2=x2;
			sy2=y2;
			sx3=x4;
			sy3=y4;	
		}
		
		sx4=-((sx2-sx1)-sx3);
		sy4=-((sy2-sy1)-sy3);
		
		if(sx4==-0){
			sx4=0;
		}
		if(sy4==-0){
			sy4=0;
		}
		
		printf("%0.3f %0.3f\n",sx4,sy4);
	}
	
	return 0;
}