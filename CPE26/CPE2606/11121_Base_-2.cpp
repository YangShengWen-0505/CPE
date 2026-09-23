#include <bits/stdc++.h>

using namespace std;

int main(){
  
	int T;
	vector<int> data;
  
	cin>>T;
	for(int t=0;t<T;t++){
	    long long int n=0;
	    data.clear();
	    cin>>n;
	    while(n!=0){
	    	if((n%(-2))==-1){
	        	data.push_back(1);
	        	n/=(-2);
	    		n++;
	        }
	        else{
	        	data.push_back((n%(-2)));
	        	n/=(-2);
	        }
	    }
	    cout<<"Case #"<<t+1<<": ";
	    for(int i=data.size()-1;i>=0;i--){
	  		cout<<data[i];
	    }
	  	cout<<endl;
  	}
  	return 0;
}
