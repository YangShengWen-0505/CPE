#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> date;
	date.push_back(6);
	date.push_back(2);
	date.push_back(2);
	date.push_back(5);
	date.push_back(7);
	date.push_back(3);
	date.push_back(5);
	date.push_back(1);
	date.push_back(4);
	date.push_back(6);
	date.push_back(2);
	date.push_back(4);
	
	int n,m,d;
	cin>>n;
	while(n>0){
		cin>>m>>d;
		switch((date[m-1]+d-1)%7){
			case 0:
				cout<<"Sunday"<<endl;
				break;
			case 1:
				cout<<"Monday"<<endl;
				break;
			case 2:
				cout<<"Tuesday"<<endl;
				break;
			case 3:
				cout<<"Wednesday"<<endl;
				break;
			case 4:
				cout<<"Thursday"<<endl;
				break;
			case 5:
				cout<<"Friday"<<endl;
				break;
			case 6:
				cout<<"Saturday"<<endl;
				break;
		}
		n--;
	}
	return 0;
}