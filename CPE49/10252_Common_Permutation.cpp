#include <iostream>
#include <string>

using namespace std;

int main(){

	int n[26],n2[26];
	string a,b;
	
	while(getline(cin,a)&&getline(cin,b)){
		for(int i=0;i<26;i++){
				n[i]=0;
				n2[i]=0;
		}
		for(int i=0;i<a.size();i++){
				n[a[i]-'a']++;	
		}
		for(int i=0;i<b.size();i++){
			if(n[b[i]-'a']>0 && n2[b[i]-'a']<n[b[i]-'a']){
				n2[b[i]-'a']++;	
			}
		}
		for(int i=0;i<26;i++){
			if(n2[i]>0){
				for(int j=0;j<n2[i];j++){
					cout<<(char)('a'+i);
				}
			}
		}
		cout<<endl;
	}

	return 0;	
}