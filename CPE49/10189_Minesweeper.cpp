#include <iostream>

using namespace std;

int main(){

	int n,m,t2[100][100],count=0;
	char t1[100][100];

	while(cin>>n>>m){
		if(n==0 && m==0){
			return 0;
		}
		if(count!=0){
			cout<<endl;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>t1[i][j];
				t2[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(t1[i][j]=='*'){
					if(i-1>=0 && j-1>=0){
						t2[i-1][j-1]++;
					}
					if(i-1>=0){
						t2[i-1][j]++;
					}
					if(i-1>=0 && j+1<m){
						t2[i-1][j+1]++;
					}
					if(j-1>=0){
						t2[i][j-1]++;
					}
					if(j+1<m){
						t2[i][j+1]++;
					}
					if(i+1<n && j-1>=0){
						t2[i+1][j-1]++;
					}
					if(i+1<n){
						t2[i+1][j]++;
					}
					if(i+1<n && j+1<m){
						t2[i+1][j+1]++;
					}
				}
			}
		}
		count++;
		cout<<"Field #"<<count<<":"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(t1[i][j]=='*'){
					cout<<"*";
				}
				else{
					cout<<t2[i][j];
				}
			}
			cout<<endl;
		}
	}
	return 0;
}