#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<string> map;
	vector<string> find;
	vector<pair<int,int>> data{
		{-1,-1},
		{-1,0},
		{-1,1},
		{0,-1},
		{0,0},
		{0,1},
		{1,-1},
		{1,0},
		{1,1}
	};
	int t;
	cin>>t;
	cin.ignore();
	string trash;
	getline(cin,trash);
	for(int T=0;T<t;T++){
		int n;
		cin>>n;
		cin.ignore();
		map.resize(n);
		find.resize(n);
		string temp;
		for(int i=0;i<n;i++){
			getline(cin,temp);
			map[i]=temp;
		}
		for(int i=0;i<n;i++){
			getline(cin,temp);
			for(int j=0;j<n;j++){
				if(temp[j]=='x'){
					int count=0;
					for(int k=0;k<9;k++){
						if((i+data[k].first>=0)&&(i+data[k].first<n) && (j+data[k].second>=0)&&(j+data[k].second<n)){
							if(map[i+data[k].first][j+data[k].second]=='*'){
								count++;
							}
						}
					}
					find[i].push_back(count+'0');
				}
				else{
					find[i].push_back('.');
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<find[i];
			if(i+1!=n){
				cout<<endl;
			}
		}
	}

	return 0;
}