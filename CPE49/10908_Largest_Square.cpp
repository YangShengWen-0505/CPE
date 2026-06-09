#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	int t,m,n,q,x,y,size;
	string temp;
	vector<string> data;
	bool check;
	
	cin>>t;
	
	for(int T=0;T<t;T++){
		data.clear();
		cin>>m>>n>>q;
		cin.ignore();
		cout<<m<<" "<<n<<" "<<q<<endl;
		for(int i=0;i<m;i++){
				getline(cin,temp);
				data.push_back(temp);
		}
		for(int Q=0;Q<q;Q++){
			cin>>y>>x;
			size=1;
			while(true){
				check=true;
				if(y-size<0 || y+size>=m || x-size<0 || x+size>=n){
						break;
				}
				for(int i=0;i<size*2 && check;i++){
					if(data[y-size][x-size+i]!=data[y][x]){
						check=false;
						break;
					}
				}
				for(int i=0;i<size*2 && check;i++){
					if(data[y-size+i][x+size]!=data[y][x]){
						check=false;
						break;
					}
				}
				for(int i=0;i<size*2 && check;i++){
					if(data[y+size][x-size+1+i]!=data[y][x]){
						check=false;
						break;
					}
				}
				for(int i=0;i<size*2 && check;i++){
					if(data[y-size+1+i][x-size]!=data[y][x]){
						check=false;
						break;
					}
				}
				if(!check){
					break;
				}
				else{
					size+=1;
				}
			}
			cout<<(size-1)*2+1<<endl;
		}
	}

	return 0;
}