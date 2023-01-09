// gcd(a,b)
#include <iostream>

using namespace std;

int main(){
    int a, b , d;
    cin >> a >> b;
    int gcd = 0;
    if(a < b){
        int c = b;
        b = a;
        a = c;
    }
    do{ // a > b
        if(a % b == 0) gcd = b;
        else{
            int d = b;
            b = a % b;
            a = d;
            gcd = b;
        }
    } while(a % b != 0);
    cout << gcd;
}