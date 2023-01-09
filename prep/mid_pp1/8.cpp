#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int t, s[n + 1];

    for(int i = 0; i < n + 1; i++){
        s[i] = 0;
    }

    for(int i = 0; i <= n; i++){
        t = i;
        while(t > 0){
            s[i] += t % 2;
            t /= 2;
        } 
    }
    for(int i = 0; i < n + 1; i++){
        cout << s[i];
    }
}