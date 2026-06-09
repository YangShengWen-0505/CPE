
#include <bits/stdc++.h>

using namespace std;

int main(){

	map<char,int> data{
		{'B',1},
		{'F',1},
		{'P',1},
		{'V',1},
		{'C',2},
		{'G',2},
		{'J',2},
		{'K',2},
		{'Q',2},
		{'S',2},
		{'X',2},
		{'Z',2},
		{'D',3},
		{'T',3},
		{'L',4},
		{'M',5},
		{'N',5},
		{'R',6}
	};
	string line;
	while(getline(cin,line)){
		int last=0;
		for(int i=0;i<line.size();i++){
			auto it=data.find(line[i]);
			if(it!=data.end()){
				if(data[line[i]]!=last){
					cout<<data[line[i]];
					last=data[line[i]];
				}
			}
			else{
				last=0;
			}
		}
		cout<<endl;
	}

	return 0;
}
