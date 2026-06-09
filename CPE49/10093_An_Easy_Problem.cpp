#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string a;
	long long int sum,max;
	
	while(cin>>a){
		sum=0;
		max=1; 
		
		for(int i=0;i<a.size();i++){
			if('0'<=a[i] && a[i]<='9'){
				sum+=a[i]-'0';
				if(max<a[i]-'0'){
					max=a[i]-'0';
				}
			}
			else if('A'<=a[i] && a[i]<='Z'){
				sum+=a[i]-'A'+10;
				if(max<a[i]-'A'+10){
					max=a[i]-'A'+10;
				}
			}
			else if('a'<=a[i] && a[i]<='z'){
				sum+=a[i]-'a'+36;
				if(max<a[i]-'a'+36){
					max=a[i]-'a'+36;
				}
			}
		}
		
		bool found = false;
		
		for(int i=max; i<=61; i++){
			if(sum % i == 0){
				cout << i + 1 << endl;
				found = true;
				break;
			}
		}
		
		if(!found){
			cout<<"such number is impossible!"<<endl;
		}
	}
	
	return 0;
}