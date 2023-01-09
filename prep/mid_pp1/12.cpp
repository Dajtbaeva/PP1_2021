#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, di, ci;
    long long n, d;
    cin >> d >> c >> n >> di >> ci; // 1 dollar = 100 cent
    int res = (di * 100 + ci) - (d * 100 + c) * n;
    if((di * 100 + ci) < (d * 100 + c) * n ) cout << -1;
    else if(res >= 0){
        cout << res/100 << " " << res % 100;
    }
}