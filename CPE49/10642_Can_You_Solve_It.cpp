#include <iostream>

using namespace std;

int move(int y1,int x1,int y2,int x2,int count){
	if(y1==y2 && x1==x2){
		return count;
	}
	if(x1!=0){
		return move(y1+1,x1-1,y2,x2,count+=1);
	}
	else{
		return move(0,y1+1,y2,x2,count+=1);
	}
};

int main(){
	
	int t,x1,y1,x2,y2,count;
	
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>y1>>x1>>y2>>x2;
		count=move(y1,x1,y2,x2,0);
		cout<<"Case "<<i+1<<": "<<count<<endl;
	}

	return 0;
}