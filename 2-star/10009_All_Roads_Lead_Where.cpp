#include <bits/stdc++.h>

using namespace std;

struct station{
	string last="";
	string name="";
	vector<string> node;
};

int main(){
	
	int T;
	cin>>T;
	cin.ignore();
	string trash;
	
	for(int t=0;t<T;t++){
		if(t!=0){
			cout<<endl;
		}
		map<string,station> data;
		string station,station1,station2;
		string target,target1,target2;
		vector<string> result;
		int m,n;
		cin>>m>>n;
		cin.ignore();
		for(int i=0;i<m;i++){
			getline(cin,station);
			stringstream ss(station);
			ss>>station1>>station2;
			data[station1].name=station1;
			data[station2].name=station2;
			data[station1].node.push_back(data[station2].name);
			data[station2].node.push_back(data[station1].name);
		}
		for(int i=0;i<n;i++){
			queue<string> find;
			vector<string> visited;
			visited.clear();
			bool check=false;
			
			getline(cin,target);
			stringstream ss(target);
			ss>>target1>>target2;
			find.push(target1);
			while(!check){
				string now=find.front();
				visited.push_back(now);
				visited.push_back(data[now].name);
				for(int j=0;j<data[now].node.size();j++){
					bool looked=false;
					for(int k=0;k<visited.size();k++){
						if(data[data[now].node[j]].name==visited[k]){
							looked=true;
							break;
						}
					}
					if(!looked){
						data[data[now].node[j]].last=data[now].name;
						find.push(data[data[now].node[j]].name);
						if(data[data[now].node[j]].name==target2){
							check=true;
						}	
					}
					if(data[data[now].node[j]].name==target2){
						check=true;
						break;
					}
				}
				find.pop();
			}
			string answer=target2;
			vector<string> final;
			final.clear();
			final.push_back(target2);
			while(answer!=target1){
				final.push_back(data[answer].last);
				answer=data[answer].last;
			}
			for(int j=final.size()-1;j>=0;j--){
				cout<<final[j][0];
			}
			cout<<endl;
		}
	}
	
	return 0;
}