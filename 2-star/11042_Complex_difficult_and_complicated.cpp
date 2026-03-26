#include <iostream>

using namespace std;

int main(){

    long long int t,a,b;

    cin>>t;
    while(t>0){
        cin>>a>>b;
        if(b==0){
            cout<<1<<endl;
        }
        else if(a==0){
            cout<<2<<endl;
        }
        else if(abs(a)==abs(b)){
            cout<<4<<endl;
        }
        else{
            cout<<"TOO COMPLICATED"<<endl;
        }
        t--;
    }

    return 0;
}