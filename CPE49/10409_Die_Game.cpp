#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int e,s,w,n,top,bottom,temp; //東南西北
	int t;
	string move;
	
	while(cin>>t){
		if(t==0){
			return 0;
		}
		e=4;
		s=5;
		w=3;
		n=2;
		top=1;
		bottom=6;
		for(int i=0;i<t;i++){
			cin>>move;
			if(move=="east"){
				temp=e;
				e=top;
				bottom=temp;
				w=7-e;
				top=7-bottom;
			}
			if(move=="south"){
				temp=s;
				s=top;
				bottom=temp;
				n=7-s;
				top=7-bottom;	
			}
			if(move=="west"){
				temp=w;
				w=top;
				bottom=temp;
				e=7-w;
				top=7-bottom;
			}
			if(move=="north"){
				temp=n;
				n=top;
				bottom=temp;
				s=7-n;
				top=7-bottom;
			}
		}
		cout<<top<<endl;
	}

	return 0;
}