#include <iostream>
#include <string>

using namespace std;

int put(int finger,bool check[]){
	if(check[finger-1]==false){
		check[finger-1]=true;
		return 1;
	}
	else{
		return 0;
	}
}

int main(){

	int t,sum,count[10];
	string a;
	char now;
	bool check[10];

	cin>>t;
	while(t>0){
		sum=0;
		cin>>a;
		for(int i=0;i<10;i++){
			check[i]=false;
			count[i]=0;
		}
		
		for(int i=0;i<a.size();i++){
			now=a[i];
			switch(now){
				case 'c':
					check[0]=false;
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					count[3]+=put(4,check);
					check[4]=false;	
					check[5]=false;	
					count[6]+=put(7,check);
					count[7]+=put(8,check);
					count[8]+=put(9,check);
					count[9]+=put(10,check);
					break;
				case 'd':
					check[0]=false;
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					count[3]+=put(4,check);
					check[4]=false;	
					check[5]=false;	
					count[6]+=put(7,check);
					count[7]+=put(8,check);
					count[8]+=put(9,check);
					check[9]=false;
					break;
				case 'e':
					check[0]=false;
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					count[3]+=put(4,check);
					check[4]=false;	
					check[5]=false;	
					count[6]+=put(7,check);
					count[7]+=put(8,check);
					check[8]=false;
					check[9]=false;
					break;
				case 'f':
					check[0]=false;
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					count[3]+=put(4,check);
					check[4]=false;	
					check[5]=false;	
					count[6]+=put(7,check);
					check[7]=false;
					check[8]=false;
					check[9]=false;
					break;
				case 'g':
					check[0]=false;
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					count[3]+=put(4,check);
					check[4]=false;
					check[5]=false;
					check[6]=false;
					check[7]=false;
					check[8]=false;
					check[9]=false;
					break;
				case 'a':
					check[0]=false;
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					check[3]=false;
					check[4]=false;
					check[5]=false;
					check[6]=false;
					check[7]=false;
					check[8]=false;
					check[9]=false;
					break;
				case 'b':
					check[0]=false;
					count[1]+=put(2,check);
					check[2]=false;
					check[3]=false;
					check[4]=false;
					check[5]=false;
					check[6]=false;
					check[7]=false;
					check[8]=false;
					check[9]=false;
					break;
				case 'C':
					check[0]=false;
					check[1]=false;
					count[2]+=put(3,check);
					check[3]=false;
					check[4]=false;
					check[5]=false;
					check[6]=false;
					check[7]=false;
					check[8]=false;
					check[9]=false;
					break;
				case 'D':
					count[0]+=put(1,check);
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					count[3]+=put(4,check);
					check[4]=false;	
					check[5]=false;	
					count[6]+=put(7,check);
					count[7]+=put(8,check);
					count[8]+=put(9,check);
					check[9]=false;
					break;
				case 'E':
					count[0]+=put(1,check);
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					count[3]+=put(4,check);
					check[4]=false;	
					check[5]=false;	
					count[6]+=put(7,check);
					count[7]+=put(8,check);
					check[8]=false;	
					check[9]=false;
					break;
				case 'F':
					count[0]+=put(1,check);
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					count[3]+=put(4,check);
					check[4]=false;	
					check[5]=false;	
					count[6]+=put(7,check);
					check[7]=false;	
					check[8]=false;	
					check[9]=false;
					break;
				case 'G':
					count[0]+=put(1,check);
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					count[3]+=put(4,check);
					check[4]=false;
					check[5]=false;
					check[6]=false;
					check[7]=false;
					check[8]=false;
					check[9]=false;
					break;
				case 'A':
					count[0]+=put(1,check);
					count[1]+=put(2,check);
					count[2]+=put(3,check);
					check[3]=false;
					check[4]=false;
					check[5]=false;
					check[6]=false;
					check[7]=false;
					check[8]=false;
					check[9]=false;
					break;
				case 'B':
					count[0]+=put(1,check);
					count[1]+=put(2,check);
					check[2]=false;
					check[3]=false;
					check[4]=false;
					check[5]=false;
					check[6]=false;
					check[7]=false;
					check[8]=false;
					check[9]=false;
					break;
			}
		}
		for(int i=0;i<10;i++){
			if(i!=0)
			cout<<" ";
			cout<<count[i];
		}
		cout<<endl;
		t--;
	}

	return 0;
}