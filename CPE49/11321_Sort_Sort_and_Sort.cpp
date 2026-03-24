#include <iostream>
#include <algorithm>

using namespace std;

int m; 

bool compare(int a, int b) {
    if (a % m != b % m) {
        return a % m < b % m; 
    } 
    else {
        bool a_is_odd = (a % 2 != 0);
        bool b_is_odd = (b % 2 != 0);

        if (a_is_odd && !b_is_odd) {
            return true;
        } 
        else if (!a_is_odd && b_is_odd) {
            return false;
        } 
        else if (a_is_odd && b_is_odd) {
            return a > b;
        } 
        else {
            return a < b;
        }
    }
}

int main(){
    int N;
    int n[10005];
    
    while(cin >> N >> m){
        cout << N << " " << m << endl;
        
        if(N == 0 && m == 0){
            break;
        }
        
        for(int i = 0; i < N; i++){
            cin >> n[i];
        }
        
        sort(n, n + N, compare);
        
        for(int i = 0; i < N; i++){
            cout << n[i] << endl;
        }
    }
    
    return 0;
}