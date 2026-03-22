#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
	
	int m,n,x,y,now;
	string temp;
	bool check;
	map<char,int> face{
		{'N',0},
		{'E',1},
		{'S',2},
		{'W',3}
	};
	map<pair<int,int>,bool> noway;
	vector<pair<int,int>> data{
		{0,1},
		{1,0},
		{0,-1},
		{-1,0}
	};
	
	cin>>n>>m;
	while(cin>>x>>y){
		cin.ignore();
		getline(cin,temp);
		now=face[temp[0]];
		getline(cin,temp);
		
		for(int i=0;i<temp.size();i++){
			check=true;
			switch(temp[i]){
				case 'F':
					if(x+data[now].first>=0 && x+data[now].first<=n && y+data[now].second>=0 && y+data[now].second<=m){
						x+=data[now].first;
						y+=data[now].second;
					}
					else{
						if(noway[{x,y}]!=true){
							check=false;
							noway[{x,y}]=true;
						}
					}
					break;
				case 'L':
					now=(now-1+4)%4;
					break;
				case 'R':
					now=(now+1+4)%4;
					break;
			}
			if(!check){
				break;
			}
		}
		for(auto it=face.begin();it!=face.end();it++){
			if(it->second==now){
				temp=it->first;
				break;
			}
		}
		if(!check){
				cout<<x<<" "<<y<<" "<<temp<<" LOST"<<endl;
		}
		else{
			cout<<x<<" "<<y<<" "<<temp<<endl;
		}
	}
	
	return 0;
}