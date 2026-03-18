#include <iostream>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int a,b;
    
    while(cin>>a>>b){
	    if(a<=1 || b<=1){
	    	cout<<"Boring!"<<endl;
	    	continue;
	    }
    	vector<long long> data;
        bool boring=false;

        data.push_back(a);

        while(a>1){
            if(a%b!=0){
                boring=true;
                break;
            }
            a/=b;
            data.push_back(a);
        }

        if (boring){
            cout<<"Boring!"<<endl;
        }else{
        	for(int i=0;i<data.size();i++){
                cout<<data[i];
                if(i!=data.size()-1){
                	cout<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}