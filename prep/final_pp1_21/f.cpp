// Is it symmetric 2d array?

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    if(n == 1){
        cout << "YES";
        return 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && a[i][j] == a[j][i]) cnt++;
        }
    }
    if(cnt == n * (n - 1)) cout << "YES";
    else cout << "NO";
}