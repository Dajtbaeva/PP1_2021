#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> h;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= h) cnt++;
    }
    cout << cnt;

}
/*
5
150 180 167 174 162
160
--------------------
4
*/