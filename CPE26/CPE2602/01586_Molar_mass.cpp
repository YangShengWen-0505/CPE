#include <bits/stdc++.h>

using namespace std;

int main(){
  
 	map<char,double> data{
    	{'C',12.01},
   	 	{'H',1.008},
    	{'O',16.00},
  		{'N',14.01},
  	};
  
 	map<char,double> result{
  	 	 {'C',0},
  	 	 {'H',0},
  	 	 {'O',0},
  		{'N',0},
 	};
  
	int T;
	cin>>T;
	cin.ignore();
	for(int t=0;t<T;t++){
	  	result.clear();
	    string input="";
	    getline(cin,input);
	    for(int i=0;i<input.size();i++){
	      	if(!('0'<=input[i] && input[i]<='9')){
	        	vector<int> temp;
	        	temp.clear();
	        	char temp3=input[i];
	        	for(int j=i+1;j<input.size();j++){
		          	if('0'<=input[j] && input[j]<='9'){
		            	temp.push_back(input[j]-'0');
		            	i=j;
		          	}
		          	else{
		  				break;
		  			}
		        }
		        int temp2=0;
		        for(int j=0;j<temp.size();j++){
		          	temp2*=10;
		          	temp2=temp2+temp[j];
		         	if(temp2==0){
		        		temp2=1;
		          	}
		        }
		        if(temp2==0){
		        	temp2=1;
		        }
		        result[temp3]+=temp2;
		    }
	    }
	    double final=0;
	    for(const auto& pair:result){
	  		final+=data[pair.first]*pair.second;
	    }
	    printf("%.3f\n",final);
	}
	return 0;
}
