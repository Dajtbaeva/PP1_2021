//Сat and Mouse
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]) k *= 2; 
        else if(a[i] <= a[i + 1] ) k -= 1;
    } 
    cout << k;
}