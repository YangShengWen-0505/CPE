#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int t,n,i;
	double p,ans;
	
	cin>>t;
	while(t>0){
		cin>>n>>p>>i;
		ans=(p*pow(1-p,i-1))/(1-pow(1-p,n));
		ans+=0.00005;
		ans=(double)((int)(ans*10000))/10000;
		if(ans<=0){
			cout<<"0.0000"<<endl;
		}
		else{
			printf("%.4f\n",ans);
		}
		t--;
	}

	return 0;
}