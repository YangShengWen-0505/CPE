#include <iostream>

using namespace std;

int main(){
	
	int N[3651]={0},party[101];
	int n,t,p,i,j,count;
	
	cin>>t;
	while(t>0){
		count=0; 
		cin>>n;
;		cin>>p;
		for(i=0;i<p;i++){
			cin>>party[i];
		}
		for(i=1;i<=n;i++){
			for(j=0;j<p;j++){
				if(i%party[j]==0){
					if(i%7!=6 && i%7!=0){
						N[i]=1;
						break;
					}
				}
			}
		}
		for(i=1;i<=n;i++){
			if(N[i]==1){
				count++;
				N[i]=0;
			}
		}
		cout<<count<<endl;
		t--;
	}
	
	return 0;
}