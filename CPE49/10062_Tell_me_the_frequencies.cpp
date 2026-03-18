#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	vector<pair<int,int>> data;
	string a;
	int first=0;
	
	while(getline(cin, a)){
		if(first==0){
			first=1;
		}
		else{
			cout<<endl;
		}
		for(int i=0;i<a.size();i++){
			int flag=0;
			for(int j=0;j<data.size();j++){
				if(data[j].first==(int)a[i]){
					data[j].second++;
					flag=1;
				}
			}
			if(flag==0){
				data.push_back({(int)a[i],1});
			}
		}
		sort(data.begin(), data.end(),[](pair<int,int>& a,pair<int,int>& b){
			if(a.second!=b.second){
				return a.second < b.second;
			}
			else{
				return a.first > b.first;
			}
        	
     	});
		for(int i=0;i<data.size();i++){
			cout<<data[i].first<<" "<<data[i].second<<endl;
		}
		data.clear();
	}
	
	return 0;
}