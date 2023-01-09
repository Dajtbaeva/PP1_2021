//calendar
#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, d; 
    cin >> m >> d;
    int days [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(m > 12 || m < 1){
        cout << "Not correct";
        return 0;
    }
    if(d > days[m - 1] || d < 1){
        cout << "Not correct";
        return 0;
    }
   

    int sum = 0;
    for( int i = 0; i < m - 1; i++){
        sum += days[i];
        
    }
    sum = sum + d;
    cout << 365 - sum + 1;
}