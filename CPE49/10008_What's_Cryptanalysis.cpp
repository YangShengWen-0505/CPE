#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int n,n1,n2,word[26];
	vector<string> a;
	vector<pair<int,char>> b(26);
	string temp;
	
	cin>>n;
	getline(cin,temp);
	
	for(int i=0;i<26;i++){
		b[i].first=0;
		b[i].second=(char)('A'+i);
	}
	
	for(int i=0;i<n;i++){
		getline(cin,temp);
		if(temp=="\n"){
			getline(cin,temp);
		}
		a.push_back(temp);
		for(int j=0;j<a[0].size();j++){
			if((a[0][j]>='a' && a[0][j]<='z')){
				b[a[0][j]-'a'].first++;
			}
			else if(a[0][j]>='A' && a[0][j]<='Z'){
				b[a[0][j]-'A'].first++;
			}
		}
		a.clear();
	}
	
	sort(b.begin(),b.end(),[](pair<int,char> a,pair<int,char> b){
		if(a.first!=b.first){
			return a.first>b.first;
		}
		else{
			return a.second<b.second;
		}
	});
	
	for(int i=0;i<26;i++){
		if(b[i].first==0){
			break;
		}
		cout<<b[i].second<<" "<<b[i].first<<endl;
	}
	
	return 0;
}
