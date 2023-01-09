// Is it fibonacci?
// You are given a number. You should check if this number is a Fibonacci number or not, 5, 610

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x,y,s,p,i,n,b,a,w1,w2,c;
    
    a = 0;
    b = 1;
    cin >> n;
    i == n;
    while(a < n){
        b = a + b;
        a = b - a;
        c++;
    }
    if (a!=n) cout << "No";
    else cout << "Yes" <<endl;
    return 0;
}
// Nura's code
#include <bits\stdc++.h>
#define l unsigned long long
//mozhno "long long" po idee
using namespace std;

bool isPerfectSquare(l x){
    l s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(l n){
    return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}
int main(){
    l n; cin >> n;
    if(isFibonacci(n)){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
