#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){

	long long int x,temp,sum,size,digit;
	vector<int> data;
	string line;
	
	while(cin>>x){
		cin.ignore();
		sum=0;
		data.clear();
		getline(cin,line);
		stringstream ss(line);
		while(ss>>temp){
			data.push_back(temp);
		}
		size=data.size();
		digit=1;
		for(int i=size-2;i>=0;i--){
			sum+=data[i]*(size-1-i)*digit;
			digit*=x;
		}
		cout<<sum<<endl;
	}

	return 0;
}