#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

	long long int x,temp,ans,n;
	string a;
	stringstream ss;
	vector<int> b;
	
	while(cin>>x){
		cin.ignore();
		getline(cin,a);
		
		ans=0;
		stringstream ss(a);
		
		b.clear();
		while(ss>>temp){
			b.push_back(temp);
		}
		
		n=b.size();
		
		for(int i=0;i<n-1;i++){
			ans+=b[i]*(n-1-i)*pow(x,n-2-i);
		}
		
		cout<<ans<<endl;
		
	}

	return 0;
}