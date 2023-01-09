// Fair exchange, swap n
// сдвигает биты
// shift left << 
// shift right >> 
#include <iostream>
using namespace std;
 
int main(){
    int n, a, b;
    cin >> n >> a >> b; // 2 11 13
    int bitA = (1 << n) & a; // 0
    int bitB = (1 << n) & b; // 4
 
    a = (a + bitB) - bitA; // 11+ 4 - 0 = 15
    b = (b + bitA) - bitB;// 13 - 4 = 9
 
    if (a > b){
        cout << "Good deal for the first number";
    }else {
        cout << "Good deal for the second number";
    }
    return 0;
}



// #include <bits/stdc++.h>

// using namespace std; 

// int main(){​​​​​

// int a, b, c, d, n;
// string num1 = "", num2="";
// cin >> n >> a >> c;

// while(a > 0)​​{
//     if (a % 2 == 0){
//         num1= '0'+ num1;
//     }else{
//         num1='1' + num1;
//     }
//     a /= 2;
// }
// while(num1.size() < n){​​​​​
//     num1 = '0' + num1;
// }​​​​​


// while (c > 0){​​​​​
//     if (c % 2 == 0) num2= '0' + num2;
//     else num2= '1' + num2;
//     c /= 2;
// }​​​​​
// while(num2.size() < n){​​​​​
//     num2 = '0' + num2;
// }​​​​​
//     
// for(int i=0;i<num1.size();i++){​​​​​
//     if(num1[i] == '0') num1[i] = '1';
//     else num1[i] = '0';
// }​​​​​
// for(int i=0;i<num2.size();i++){​​​​​
//     if(num2[i] == '0') num2[i] = '1';
//     else num2[i] = '0';
// }​​​​​
// for(int i=0;i<n;i++){​​​​​
//     if(num1[i] - '0' > num2[i] - '0'){​​​​​
//         cout<<"Good deal for the first number";
//     }​​​​​ else if(num2[i] - '0' > num1[i] - '0'){​​​​​
//         cout<<"Good deal for the second number";
//        
//     }​​​​​
// }​​​​​     
//     return 0; 
// }​​​​​