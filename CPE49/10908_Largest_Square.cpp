#include <iostream>
#include <vector>

using namespace std;

int main(){

	long long int t,m,n,q,x,y,up,down,left,right,move,small;
	vector<vector<char>> map;
	char temp,target;
	bool check;
	
	cin>>t;
	while(t>0){
		cin>>m>>n>>q;
		map.resize(m);
		for(int i=0;i<m;i++){
			map[i].resize(n);
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>map[i][j];
			}
		}
		cout<<m<<" "<<n<<" "<<q<<endl;
		while(q>0){
			small=0;
			cin>>x>>y;
			target=map[x][y];
			move=y;
			temp=map[x][move];
			right=-1;
			while(temp==target && move<n){
				move++;
				right++;
				if( move>=n)
					break;
				temp=map[x][move];
			}
			small=right;
			
			move=y;
			temp=map[x][move];
			left=-1;
			while(temp==target && move>=0){
				move--;
				left++;
				if( move<0)
					break;
				temp=map[x][move];
			}
			if(small>left)
				small=left;
				
			move=x;
			temp=map[move][y];
			down=-1;
			while(temp==target && move<m){
				move++;
				down++;
				if( move>=m)
					break;
				temp=map[move][y];
			}
			if(small>down)
				small=down;
			
			move=x;
			temp=map[move][y];
			up=-1;
			while(temp==target && move>=0){
				move--;
				up++;
				if( move<0)
					break;
				temp=map[move][y];
			}
			if(small>up)
				small=up;
			check=false;
			while(check==false){
				for(int i=0;i<small*2+1;i++){
					for(int j=0;j<small*2+1;j++){
						if(map[x-small+i][y-small+j]==target){
							check=true;
						}
						else{
							check=false;
							break;
						}
					}
					if(check==false)
						break;
				}
				if(check==false){
					small-=1;
				}
				if(small==0)
					break;
			}
			cout<<small*2+1<<endl;
			
			q--;
		}
		t--;
		
	}
	return 0;
}