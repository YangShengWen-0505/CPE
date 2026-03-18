#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int count=0,i;
	bool flag;
	string a;
	flag=false;
	while(getline(cin,a)){
		for(i=0;i<a.size();i++){
			if(a[i]=='"'){
				if(flag==false){
					cout<<"``";
					flag=true;
				}
				else{
					cout<<"''";
					flag=false;
				}
			}
			else{
				cout<<a[i];	
			}
		}
		cout<<endl;
		a.clear();
	}
	
	return 0;
}