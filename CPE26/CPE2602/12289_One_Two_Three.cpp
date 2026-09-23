#include <bits/stdc++.h>

using namespace std;

int main(){
  
  	int t;
  	bool first=true;
  	vector<string> data{
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten"
	};
	cin>>t;
	cin.ignore();
	for(int T=0;T<t;T++){
	    string n;
	    getline(cin,n);
	    for(int i=0;i<10;i++){
	     	if(n.size()==data[i].size()){
		      	bool A=true,B=true;
		      	for(int j=0;j<n.size();j++){
			        if(data[i][j]!=n[j]){
			        	if(A)
			            A=false;
			        }else{
			            B=false;
			          	break;
			        }
		        }
		    }
		    if(B){
		    	cout<<i+1<<endl;
		      	break;
		    }
		}
    }
	return 0;
}
