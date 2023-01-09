// дано число n, далее n чисел. Посчитать XOR чисел массива,
// и вывести YES если оно равно 2^k
// 1^2^3^4^5 == 2^k

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x, m = 0;

    while(n--){
        cin >> x;
        m ^= x; 
    }
    int temp = 0;
    int deg = 1;
    while(deg < m){
        deg = pow(2, temp);
        temp++;
    }
    cout << ((deg == m) ? "YES" : "NO"); 
    return 0;
}