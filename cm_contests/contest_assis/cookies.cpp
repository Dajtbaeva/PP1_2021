// recursion, index of max number
// Программа должна вывести одно число - номер пачки с наибольшим кол-вом печенек.

#include <bits/stdc++.h>

using namespace std;

int n;
int maxi(int b[], int c, int j){
    if(j == n) return c;
    if(b[j] > c) c = b[j];
    return maxi(b, c, j + 1);
}

int main(){
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxx;
    maxx = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] == maxi(a, maxx, 0)){
            cout << i + 1;
            return 0;
        }
    }
}
