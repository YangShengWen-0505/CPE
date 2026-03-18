#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	vector<long long> n={1,2};
	long long N,i,j,line,flag;
	long long DEC_BASE;
	string FIB_BASE;
	
	cin>>line;
	while(line>0){
		cin>>N;
		DEC_BASE=N;
		FIB_BASE="";
		flag=0;
		while(N>0){
			i=0;
			while(n[i]<=N){
				if (n.size()<i+2){
					n.push_back(n[i]+n[i-1]);	
				}
				i++;
			}
			if(flag==0){
				FIB_BASE='1';
				for(j=0;j<i-1;j++){
					FIB_BASE.append("0");
					flag=1; 
				}	
			}
			else{
				FIB_BASE[FIB_BASE.size()-i]='1';
			}
			N-=n[i-1];
		}
		cout<<DEC_BASE<<" = "<<FIB_BASE<<" (fib)"<<endl;	
		
		line--;
	}
	return 0;
}