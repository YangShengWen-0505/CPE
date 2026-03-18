#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int a,b;
	while(cin>>a>>b){
		if(a==0 && b==0){
			break;
		}
		int count=0;
		int i;
		for(i=a;i<=b;i++){
			if((int)sqrt(i)*(int)sqrt(i)==i){
				count++;
			}
		}
		cout<<count<<endl;
	}

	return 0;
}