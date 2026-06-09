#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

    long long int t,count;
    unsigned long long sum;
    string word;

    cin>>t;
    for(int T=0;T<t;T++){
        cout<<"Data set "<<T+1<<": ";
        cin>>word;
        sort(word.begin(),word.end());
        
        sum=1;
        count=1;
        for(int i=0;i<word.size();i++){
            sum*=i+1;
        }
        for(int i=0;i<word.size()-1;i++){
            if(word[i]==word[i+1]){
                count++;
            }
            else{
                for(int j=0;j<count;j++){
                    sum/=j+1;
                }
                count=1;
            }
        }
        for(int j=0;j<count;j++){
            sum/=j+1;
        }
        cout<<sum<<endl;
    }

    return 0;
}