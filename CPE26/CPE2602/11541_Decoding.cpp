#include <bits/stdc++.h>

using namespace std;

int main(){
  
  	int T;
  
  	cin>>T;
  	cin.ignore();
  	for(int t=0;t<T;t++){
  		cout<<"Case "<<t+1<<": ";
    	string input;
    	getline(cin,input);
    	for(int i=0;i<input.size();i++){
      		if(!('0'<=input[i] && input[i]<='9')){
        	char word=input[i];
        	vector<int> number;
        	number.clear();
        	for(int j=i+1;j<input.size();j++){
          		if('0'<=input[j] && input[j]<='9'){
            		number.push_back(input[j]-'0');
            		i=j;
          		}
          		else{
  		    		break;
  		    	}
        	}
        	int count=0;
        	for(int j=0;j<number.size();j++){
          		count*=10;
          		count+=number[j];
        	}
        	for(int j=0;j<count;j++){
  				cout<<word;
  			}
  		}
    }
  	cout<<endl;
  }
	return 0;
}
