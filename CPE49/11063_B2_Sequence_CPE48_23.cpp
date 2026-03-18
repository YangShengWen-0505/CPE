#include <iostream>
#include <vector>

using namespace std;

int main(){

	long long N,n,count=0;
	bool check;
	while(cin>>N){
		count+=1;
		vector<int> a,b;
		for(int i=0;i<N;i++){
			cin>>n;
			a.push_back(n);
		}
		for(int i=0;i<a.size();i++){
			for(int j=i;j<a.size();j++){
				check=false;
				for(int z=0;z<b.size();z++){
					if(a[i]+a[j]==b[z]){
						check=true;
						break;
					}
				}
				if(check==true){
					break;
				}
				else{
					b.push_back(a[i]+a[j]);
				}
			}
			if(check==true){
					break;
			}
		}
		if(check==true){
			cout<<"Case #"<<count<<": It is not a B2-Sequence."<<endl<<endl;
		}
		else{
			cout<<"Case #"<<count<<": It is a B2-Sequence."<<endl<<endl;
		}
	}

	return 0;
}