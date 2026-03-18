#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string a,b;
	a="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,.";
	
	while(getline(cin,b)){
		for(int i=0;i<b.size();i++){
			if(b[i]==' '){
				cout<<" ";
				continue;
			}
			for(int j=0;j<a.size();j++){
				if(a[j]==b[i] || (a[j]-32)==b[i]){
					if(j-2>=0){
						cout<<a[j-2];
					}
					else{
						cout<<a[j];
					}
					break;
				}
			}
		}
		cout<<endl;
	}

	return 0;
}