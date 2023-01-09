// Jaxonacci

#include <bits/stdc++.h>

using namespace std;

int arr[1001];

int fib(int n){
    if(n == 1) return arr[1] = 0;
    if(n == 2) return arr[2] = 1;
    return arr[n] = (arr[n - 1] % 10 + arr[n - 2] % 10) % 10;
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << fib(i) << " ";
    }
}
/*
Find the last digit of fibonacci numbers starting from 1st to n th.
Print last digits of fibonacci numbers from 1 to n in single line.
*/
