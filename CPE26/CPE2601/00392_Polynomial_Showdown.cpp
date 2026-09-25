#include <bits/stdc++.h>

using namespace std;

int main(){
  
  	string input;
  	vector<long long int> data;
  
  	while(getline(cin,input)){
	  	data.clear();
	    stringstream ss(input);
	    int temp=0;
	    while(ss>>temp){
	      data.push_back(temp);
    	}
	    bool first=true;
	    for(int i=0;i<9;i++){
	      	if(data[i]!=0){
	        	if(first && data[i]<0){
	          		cout<<"-";
	      			first=false;
	        	}
	        	else if(first){
	      			first=false;
	        	}
		    else{
		        if(data[i]>0){
		           	cout<<" + ";
	          	}
	          	else{
	      			cout<<" - ";
	      		}
	      	}
	        if(data[i]==1 || data[i]==-1){
	          	if(8-i==1){
	        		cout<<"x";
	          	}
	          	else if(8-i!=0){
	        		cout<<"x^"<<8-i;
	          	}
	          	else{
	        		cout<<1;
	        	}
	        }
	        else{
	          	if(8-i==1){
	        		cout<<abs(data[i])<<"x";
	          	}
	          	else if(8-i!=0){
	        		cout<<abs(data[i])<<"x^"<<8-i;
	          	}
	          	else{
	        		cout<<abs(data[i]);
	        	}
	      	}
	  	}
    }
    if(first)
      	cout<<0;
  		cout<<endl;
  	}
	return 0;
}
