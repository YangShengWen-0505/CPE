#include <bits/stdc++.h>

using namespace std;

int main(){
  
  	int T;
  	map<string,int> data{
    	{"January",1},
    	{"February",2},
    	{"March",3},
    	{"April",4},
    	{"May",5},
    	{"June",6},
    	{"July",7},
    	{"August",8},
    	{"September",9},
    	{"October",10},
    	{"November",11},
    	{"December",12},
    	{"january",1},
    	{"february",2},
    	{"march",3},
    	{"april",4},
    	{"may",5},
    	{"june",6},
    	{"july",7},
    	{"august",8},
    	{"september",9},
    	{"october",10},
    	{"november",11},
  		{"december",12},
  	};
	   
  	cin>>T;
  	for(int t=0;t<T;t++){
	    long long int y,m,d,x;
	    string M;
	    char dash;
	    
	    cin>>y>>dash;
	    getline(cin,M,'-');
	    cin>>d;
	    cin>>x;
	    
	    m=data[M];
	    d+=x;
	    bool finish=false;
	    while(!finish){
	      	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
	        	if(d<=31)
	      			finish=true;
	        	else{
	          		m+=1;
	      			d-=31;
	      		}
	      	}
	      	else if(m==4||m==6||m==9||m==11){
	        	if(d<=30)
	      			finish=true;
	        	else{
	       		    m+=1;
	      			d-=30;
	      		}
	      	}
	     	else{
		        if((y%4==0 && y%100!=0) || y%400==0){
		          	if(d<=29)
		      			finish=true;
			        else{
			          	m+=1;
			      		d-=29;
			      	}
		        }
		        else{
			        if(d<=28)
			      		finish=true;
			        else{
			          	m+=1;
			    		d-=28;
			      	}
		      	}
	      	}
	      	if(m==13){
	        	y+=1;
	    		m=1;
	    	}
	    }
	    for(const auto& pair:data){
	     	if(pair.second==m){
	        	M=pair.first;
	    		break;
	    	}
	    }
	    if(d<10)
	      	cout<<"Case "<<t+1<<": "<<y<<"-"<<M<<"-0"<<d<<endl;
	    else
	      	cout<<"Case "<<t+1<<": "<<y<<"-"<<M<<"-"<<d<<endl;	
  	}
  
	return 0;
}
