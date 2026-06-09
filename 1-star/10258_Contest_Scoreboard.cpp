
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct player{
	int count=0;
	map<int,int> error_count;
	map<int,bool> correct;
	int time=0;
};

using namespace std;

int main(){

	int line;
			
	cin>>line;
	cin.ignore();
	for(int L=-1;L<line;L++){
		map<int,player> P;
		vector<pair<int,pair<int,int>>> result;
		string temp;
		
		while(getline(cin,temp)){
			if(temp==""){
				break;
			}
			int p,n,t;
			string w;
			stringstream ss(temp);
			ss>>p>>n>>t>>w;
			if(P[p].correct[n]==true){
				continue;
			}
			else{
				if(w=="I"){
					P[p].error_count[n]+=1;
				}
				else if(w=="C"){
					P[p].correct[n]=true;
					P[p].count++;
					P[p].time+=t+P[p].error_count[n]*20;
				}
			}	
		}
		
		for(auto it=P.begin();it!=P.end();it++){
			result.push_back({it->first,{it->second.count,it->second.time}});
		}
		
		sort(result.begin(),result.end(),[](pair<int,pair<int,int>>& a,pair<int,pair<int,int>>& b){
			if(a.second.first!=b.second.first)
				return a.second.first>b.second.first;
			else if(a.second.second!=b.second.second)
				return a.second.second<b.second.second;
			else
				return a.first<b.first;
		});
		
		for(int i=0;i<result.size();i++){
			cout<<result[i].first<<" "<<result[i].second.first<<" "<<result[i].second.second<<endl;
		}
		if(L!=-1&&L!=line-1){
			cout<<endl;
		}
	}
	
	return 0;
}
