// Sharky and primes

#include <bits/stdc++.h>

using namespace std;

bool isprime(int a){
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0) return false;
    }
    return true; 
}

int main(){
    int n;
    cin >> n;
    for(int i = 3; i < n; i++){
        int a = n - i;
        if(isprime(i) == true && isprime(a) == true){
            cout << i << " " << a;
            return 0;
        } 
    }
}