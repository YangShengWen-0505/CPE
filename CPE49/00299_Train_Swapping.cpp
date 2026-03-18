#include <iostream>

using namespace std;

int main(){

	int t,N,n[50],count,temp;
	
	cin>>t;
	
	while(t>0){
		cin>>N;
		count=0;
		
		for(int i=0;i<N;i++){
			cin>>n[i];
		}
		
		for(int i=0;i<N-1;i++){
			for(int j=0;j<N-1-i;j++){
				if(n[j]>n[j+1]){
					temp=n[j+1];
					n[j+1]=n[j];
					n[j]=temp;
					count++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
		t--;
	}

	return 0;
}