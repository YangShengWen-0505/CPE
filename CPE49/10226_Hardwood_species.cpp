#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int n,count=0;
	vector<pair<string,int>> data;
	vector<string> name;
	string word;
	
	if(!(cin>>n))
		return 0;
	getline(cin,word);
	getline(cin,word);
	
	while(true){
		bool has_next=(bool)getline(cin, word);
		if(!has_next || word==""){
			if(count > 0){
				sort(name.begin(),name.end());
				
				data.push_back({name[0],0});
				
				for(int i=0;i<name.size();i++){
					if(name[i]==data[data.size()-1].first){
						data[data.size()-1].second++;
					}
					else{
						cout<<data[data.size()-1].first;
						printf(" %0.4f\n",(double)data[data.size()-1].second/count*100);
						data.push_back({name[i],1});
					}
				}
				cout<<data[data.size()-1].first;
				printf(" %0.4f\n",(double)data[data.size()-1].second/count*100);
			}
			n--;
			if(n==0){
				break;
			}
			else{
				cout<<endl;
				count=0;
				data.clear();
				name.clear();
				continue;
			}
		}
		name.push_back(word);
		count++;
	}

	return 0;
}