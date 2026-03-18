#include <iostream>
#include <string>

using namespace std;

int main(){
	int t,N,left,right,n[10001];
	string temp;
	bool check;
	cin>>t;
	for(int i=0;i<t;i++){
		check=true;
		cin>>temp;
		cin>>temp;
		cin>>N;
		for(int j=0;j<N*N;j++){
			cin>>n[j];
		}
		left=0;
		right=N*N-1;
		while(left<right){
			if(n[left]<0 || n[left]!=n[right] || n[right]<0){
				check=false;
				break;
			}
			else{
				left++;
				right--;
			}
		}
		if(check==false){
			cout<<"Test #"<<i+1<<": Non-symmetric."<<endl;
		}
		else{
			cout<<"Test #"<<i+1<<": Symmetric."<<endl;
		}
	}

	return 0;
}