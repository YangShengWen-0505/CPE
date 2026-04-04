#include <iostream>
#include <string>

using namespace std;

int main(){

	long long int n, sum, digit;
	string N;
	
	while(cin >> N){
		n = 0;
		if(N.size() >= 2){
			n += (N[N.size()-2]-'0')*10;
		}
		n += N[N.size()-1]-'0';
		sum = 0;
		if(N == "0"){
			break;
		}
		for(int i = 1;i <= n;i++){
			if(i%10 == 0){
				continue;
			}
			digit = 1;
			for(int j = 1;j <= (i-1)%4+1;j++){
				digit = (digit*(i%10))%10;
			}
			sum = (sum + digit) % 10;
		}
		cout << sum%10 <<endl;
	}
	
	return 0;
}