// Tsunami

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    char a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = '.';
        } 
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(n % 2 == 0){
                if(i == j || i > j) a[i][j] = '#';
            }else if(n % 2 != 0){
                if(i + j == n - 1 || i + j > n - 1) a[i][j] = '#';
            }
        } 
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j];
        } cout << '\n';
    }
}