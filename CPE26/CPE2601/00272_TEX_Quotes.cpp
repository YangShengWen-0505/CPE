#include <bits/stdc++.h>

using namespace std;

int main(){
  
  	string input;
  
  	while(getline(cin,input)){
	  	bool ch=false;
	    for(int i=0;i<input.size();i++){
		    if(input[i]=='"'){
			 	if(!ch){
		    	cout<<"``";
		        ch=true;
		      	}
		        else{
			    	cout<<"''";
			    	ch=false;
			    }
		    }
		    else
		    	cout<<input[i];
	    }
	    cout<<endl;
  	}
    return 0;
}
