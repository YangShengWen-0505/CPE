#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

	map<char, char> data;
	string key = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string input;
	int size;
	
	size = key.size();
	for(int i = 0; i < size; i++){
		data[key[i]] = key[(i-1+size)%size];
	}
	
	while(getline(cin,input)){
		for(int i = 0; i < input.size(); i++){
			if(input[i] == ' '){
				cout <<	input[i];
			}
			else{
				cout << data[input[i]];
			}
		}
		cout<<endl;
	}
	
	return 0;
}