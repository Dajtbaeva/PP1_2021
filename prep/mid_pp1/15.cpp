// sort array without sort()
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // 4
    // 74 -16 21 17
    for (int i = 0; i < n; i++){
       for (int j = i + 1; j < n; j++){
          if (a[i] > a[j]){ // a[i] = 74 > a[j] = -16
             int buf = a[i]; // buf = 74
             a[i] = a[j]; // a[i] = -16
             a[j] = buf; // a[j] = 74
            }
        } 
    }
       

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}