#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string temp,time;
	long long int ls=-1,s;
	double v,total=0;
	
	while(getline(cin,temp)){
		double kms_temp=-1;
		stringstream ss(temp);
		ss>>time>>kms_temp;
		s=(((time[0]-'0')*10+(time[1]-'0'))*3600)+(((time[3]-'0')*10+(time[4]-'0'))*60)+((time[6]-'0')*10+(time[7]-'0'));
		long long int dt=s-ls;
		if(kms_temp==-1){
				total+=dt*v;
				cout<<time;
				printf(" %0.2f km\n",total);
		}
		else{
			if(ls==-1){
				v=kms_temp/3600;
			}
			else{
				total+=dt*v;
				v=kms_temp/3600;
			}
		}
		ls=s;
	}

	return 0;
}