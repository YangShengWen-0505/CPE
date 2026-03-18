#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

bool move(int x,int y,pair<int,int> p,int l,int w){
	if(x+p.first<0 ||x+p.first>l || y+p.second<0 || y+p.second>w){
		return false;
	}
	else{
		return true;
	}
}

int main(){

	long long int l,w,x,y,now;
	vector<vector<int>> data;
	vector<pair<int,int>> p;
	string temp,line;
	map<string,int> pos;
	bool check;

	pos["N"]=0;
	pos["E"]=1;
	pos["S"]=2;
	pos["W"]=3;
	
	p.push_back({0,1});
	p.push_back({1,0});
	p.push_back({0,-1});
	p.push_back({-1,0});
	
	cin>>l>>w;
	
	data.resize(l+1);
	for(int i=0;i<data.size();i++){
		for(int j=0;j<w+1;j++){
			data[i].push_back(0);
		}
	}
	
	
	while(cin>>x>>y>>temp){
		cin.ignore();
		getline(cin,line);
		
		now=pos[temp];
		//cout<<now<<" "<<x<<" "<<y<<" "<<temp<<endl<<endl;
		for(int t=0;t<line.size();t++){
			check=false;
			//cout<<line[t]<<endl;
			//cout<<p[now].first<<" "<<p[now].second<<endl;
			switch(line[t]){
				case 'L':
					now=(now-1+4)%4;
					break;
				case 'R':
					now=(now+1+4)%4;
					break;
				case 'F':
					if(move(x,y,p[now],l,w)){
						x+=p[now].first;
						y+=p[now].second;
					}
					else{
						if(data[abs(l-x)][y]!=1){
							data[abs(l-x)][y]=1;
							check=true;
						}
						
	
					}
					break;
			}

			
			if(check==true)
					break;
		}
		
		if(check==true){
			cout<<x<<" "<<y<<" "<<temp<<" LOST"<<endl;
		}
		else{
			for(auto it=pos.begin();it!=pos.end();it++){
				if((*it).second==now){
					temp=(*it).first;
					break;
				}
			}
		
			cout<<x<<" "<<y<<" "<<temp<<endl;
		}
	}
	return 0;	
}