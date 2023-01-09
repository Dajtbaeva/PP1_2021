#include <bits/stdc++.h>

using namespace std;

bool isprime(int x){
    for(int i = 2; i < sqrt(x); i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int n, f;
    cin >> n >> f;

    if(n < 500 && isprime(n) && f % 2 == 0) cout << "Good job!";
    else cout << "Try next time!";

}