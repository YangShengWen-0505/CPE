#include <iostream>

using namespace std;

int main(){
	int n,x1,y1,x2,y2,sum1,sum2;
	
	cin>>n;
	for(int t=0;t<n;t++){
		cin>>x1>>y1>>x2>>y2;
		sum1=((x1+y1)*(x1+y1+1))/2+x1;
		sum2=((x2+y2)*(x2+y2+1))/2+x2;
		cout<<"Case "<<t+1<<": "<<sum2-sum1<<endl;
	}
	
	return 0;
}