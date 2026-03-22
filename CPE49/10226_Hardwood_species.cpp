#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	
	string data;
	int n,count;
	map<string,int> result;
	
	cin>>n;
	cin.ignore();
	getline(cin,data);
	
	for(int t=0;t<n;t++){
		result.clear();
		count=0;
		while(getline(cin,data)){
			if(data.empty()){
				break;
			}
			count++;
			result[data]++;
		}
		for(auto it=result.begin();it!=result.end();it++){
			cout<<it->first<<" ";
			printf("%0.4f\n",((double)it->second/count)*100);
		}
		if(t!=n-1){
			cout<<endl;
		}
	}
	
	return 0;
}