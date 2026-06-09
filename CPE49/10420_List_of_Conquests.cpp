#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int n;
	vector<pair<string,int>> data;
	char country[100],temp[100];
	bool check;
	
	cin>>n;
//	cout<<"1"<<endl;
	while(n>0){
		for(int i=0;i<data.size();i++){
		//	cout<<data[i].first<<" "<<data[i].second<<endl;
		}
		check=false;
		cin>>country>>temp>>temp;
	//	cout<<"2"<<endl;
		for(int i=0;i<data.size();i++){
			if(data[i].first==country){
			//	cout<<data[i].first<<" "<<country<<" ";
				data[i].second++;
			//	cout<<data[i].second<<endl;
				check=true;
				break;
			}
		}
	//	cout<<"3"<<endl;
		if(check==false){
			data.push_back({country,1});
		//	cout<<"first "<<country<<" "<<data[data.size()-1].second<<endl;
		}
		n--;
		//cout<<"4"<<endl;
	}
	//cout<<"5"<<endl;
	sort(data.begin(),data.end(),[](pair<string,int> a,pair<string,int> b){
		if(a.second!=b.second)
			return a.second<b.second;
		else
			return a.first<b.first;
	});
	for(int i=0;i<data.size();i++){
		cout<<data[i].first<<" "<<data[i].second<<endl;
	}

	return 0;
}
