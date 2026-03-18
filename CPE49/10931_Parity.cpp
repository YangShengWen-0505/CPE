#include <iostream>
#include <vector>

using namespace std;

int main(){

	long long a;
	
	while(cin>>a){
		if(a==0){
			break;
		}
		if(a==1){
			cout<<"The parity of 1 is 1 (mod 2)."<<endl;
			continue;
		}
		vector<int> data;
		while(a>=2){
			data.push_back(a%2);
			a/=2;
		}
		data.push_back(a);
		int count=0;
		cout<<"The parity of ";
		for(int i=data.size()-1;i>=0;i--){
			cout<<data[i];
			if(data[i]==1){
				count++;
			}
		}
		cout<<" is "<<count<<" (mod 2)."<<endl;
	}

	return 0;
}