#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	vector<string> line;
	string s;
	int i,j,maxLen=0;
	
	while(getline(cin,s)){
		line.push_back(s);
	}
	for(i=0;i<line.size();i++){
		if(line[i].size()>maxLen){
			maxLen=line[i].size();
		}
	}
	for(j=0;j<maxLen;j++){
		for(i=line.size()-1;i>=0;i--){
			if(j<line[i].size()){
				cout<<line[i][j];
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;	
	}
	
	return 0;
}