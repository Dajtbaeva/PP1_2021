// Not a cheep one, Apple, salary
#include <bits/stdc++.h>

using namespace std;

int main(){
    float n;
    int cnt = 0;
    cin >> n;
    float s = 0;
    while(s < 500000){
        s += ((n / 100) * 30);
        n += ((n / 100) * 10);
        cnt++;
    }
    cout << cnt;
}


