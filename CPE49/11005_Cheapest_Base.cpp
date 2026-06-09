#include <iostream>
#include <vector>

using namespace std;

int main(){

	long long int price[36],T,N,temp,sum,small,Temp;
	vector<int> result;
	
	cin>>T;
	for(int t=0;t<T;t++){
		if(t!=0){
			cout<<endl;
		}
		for(int i=0;i<36;i++){
			cin>>price[i];
		}
		
		cout<<"Case "<<t+1<<":"<<endl;
		cin>>N;
		
		for(int n=0;n<N;n++){
			cin>>temp;
			cout<<"Cheapest base(s) for number "<<temp<<": ";
			small=99999;
			for(int i=2;i<=36;i++){
				sum=0;
				Temp=temp;
				while(Temp>0){
					sum+=price[Temp%i];
					Temp/=i;
				}
				if(sum<=small){
					if(sum!=small){
						small=sum;
						result.clear();
						result.push_back(i);
					}
					else{
						result.push_back(i);
					}
				}
			}
			for(int i=0;i<result.size();i++){
				if(i!=0)
					cout<<" ";
				cout<<result[i];
			}
			cout<<endl;
		}
	}
	
	return 0;
}