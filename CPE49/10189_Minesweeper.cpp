#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	int m, n,map[101][101],k=0;
	string data;
	vector<pair<int,int>> count{
		{-1,-1},
		{-1,0},
		{-1,1},
		{0,-1},
		{0,1},
		{1,-1},
		{1,0},
		{1,1}
	};

	while(true){
	    cin>>m>>n;
		if(m==0&&n==0)
			break;
		k++;
		if(k!=1)
			cout<<endl;
		cout<<"Field #"<<k<<":"<<endl;
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				map[i][j]=0;
			}
		}
		
		for(int i=0;i<m;i++){
			cin>>data;
			for(int j=0;j<n;j++){
				if(data[j]=='*'){
					map[i][j]=-1;
					for(int t=0;t<8;t++){
						if(map[i+count[t].first][j+count[t].second]!=-1 && i+count[t].first>=0 && i+count[t].first<m && j+count[t].second>=0 && j+count[t].second<n){
							map[i+count[t].first][j+count[t].second]++;
						}
					}
				}
			}
		}
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(map[i][j]==-1){
					cout<<"*";
				}
				else{
					cout<<map[i][j];
				}
			}
			cout<<endl;
		}
	}
	
	return 0;
}