// //Valid date
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int m, d, y; 
//     cin >> d >> m >> y;
//     int days [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//     if(d > days[m - 1] || d < 1 || m > 12 || m < 1 || y > 2035 || y < 1970){
//         cout << "NO";
//         return 0;
//     }
//     cout << "YES";
//     return 0;
// }

#include <iostream> 
using namespace std; 
 
int main() { 
    int a, b, y;
    cin >> b >> a >> y;
    if(((((a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) && 0 < b && b <= 31) || ((a == 4 || a == 6 || a == 9 || a == 11) && 0 < b && b <= 30) || (a == 2 && 0 < b && b < 29))) && (1970 <= y && y <= 2035)){
        cout << "YES";
    }
    else{
    cout << "NO";}
   
}