#include <iostream>
#include <vector>

using namespace std;

void change(int i,int quiz,vector<int>& data){
	while(quiz>0){
		data.push_back(quiz%i);
		quiz/=i;
	}
}

int main(){

	int t,n,quiz,small,sum,price[37];
	vector<int> data,output;
	
	cin>>t;
	for(int T=0;T<t;T++){
		if(T!=0){
			cout<<endl;
		}
		cout<<"Case "<<T+1<<":"<<endl;
		for(int i=0;i<36;i++){
			cin>>price[i];
		}
		cin>>n;
		while(n>0){
			small=999999999;
			cin>>quiz;
			for(int i=2;i<=36;i++){
				sum=0;
				data.clear();
				change(i,quiz,data);
				for(int j=0;j<data.size();j++){
					sum+=price[data[j]];
				}
				if(small>sum){
					output.clear();
					small=sum;
					output.push_back(i);
				}
				else if(small==sum){
					output.push_back(i);
				}
			}
			cout<<"Cheapest base(s) for number "<<quiz<<":";
			for(int i=0;i<output.size();i++){
				cout<<" ";
				cout<<output[i];
			}
			cout<<endl;
			n--;
		}
	}

	return 0;
}