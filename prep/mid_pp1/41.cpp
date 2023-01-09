// Squid game
#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n, sumi = 0;
    cin >> m >> n;

    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    vector<int> v;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            sumi += a[i][j];
        } v.push_back(sumi);
        sumi = 0;
    }

    int maxi = 0;
    for(int i = 0; i < v.size(); i++){
        if(maxi < v[i]) maxi = v[i];
    }
    cout << maxi << '\n';
}