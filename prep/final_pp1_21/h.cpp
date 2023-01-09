// Date of the next day

#include <bits/stdc++.h>

using namespace std; 
 
int main(){ 
    int d, m, y;
    cin >> d >> m >> y;
    if(((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && 0 < d && d <= 31) ||
     ((m == 4 || m == 6 || m == 9 || m == 11) && 0 < d && d <= 30) || (m == 2 && 0 < d && d < 29)){
        if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ){
            if(d == 31 && m != 12) cout << 1 << ' ' << m + 1 << ' ' << y;
            else if(d == 31 && m == 12) cout << 1 << ' ' << 1 << ' ' << y + 1;
            else cout << d + 1 << ' ' << m << ' ' << y;
        }else if(m == 2){
            if(d == 28) cout << 1 << ' ' << m + 1 << ' ' << y;
            else cout << d + 1 << ' ' << m << ' ' << y;
        }
        else{
            if(d == 30) cout << 1 << ' ' << m + 1 << ' ' << y;
            else cout << d + 1 << ' ' << m << ' ' << y;
        }
    }
}