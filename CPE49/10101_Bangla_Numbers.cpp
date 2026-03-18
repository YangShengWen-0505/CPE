#include <iostream>

using namespace std;

void change(long long int& n, long long int temp){
    if(n == 0){
        cout << n;
        return;
    }
    
    bool check = false;
    
    if(n >= 10000000){
        temp = n / 10000000;
        n -= temp * 10000000;
        
        if(temp >= 100){
            change(temp, 0);
            cout << " kuti";
            check = true;
        }else{
        	cout << temp << " kuti";
            if(check == true){
                cout << " ";
            }
            check = true;
        }
    }
    
    if(n >= 100000){
        temp = n / 100000;
        n -= temp * 100000;
        
        if(check == true){
            cout << " ";
        }
        cout << temp << " lakh";
        check = true;   
    }
    
    if(n >= 1000){
        temp = n / 1000;
        n -= temp * 1000;
        
        if(check == true){
            cout << " ";
        }
        cout << temp << " hajar";   
        check = true;   
    }
    
    if(n >= 100){
        temp = n / 100;
        n -= temp * 100;
        
        if(check == true){
            cout << " ";
        }
        cout << temp << " shata";
        check = true;   
    }
    
    if(n != 0){
        if(check == true){
            cout << " ";
        }
        cout << n;
    }
}

int main(){
    long long int n, count = 0;
    
    while (cin >> n){
        count++;
        
        if(count < 10){
            cout << "   " << count << ". ";
        }else if(count < 100){
            cout << "  " << count << ". ";
        }else if(count < 1000){
            cout << " " << count << ". ";
        }else if(count < 10000){
            cout << "" << count << ". ";
        }
        
        change(n, 0);
        cout << endl;
    }
    
    return 0;
}