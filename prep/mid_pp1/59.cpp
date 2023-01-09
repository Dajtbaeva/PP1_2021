#include <bits/stdc++.h>

using namespace std;

bool isSorted(int a[], int n){
    int b[n];
    int e = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    // sort(b, b + n);

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(b[i] > b[j]){
                int buf = b[i];
                b[i] = b[j];
                b[j] = buf;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(b[i] == a[i]) e++;
    }
    if(e == n) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    
    int a[n];

    isSorted(a, n) ? cout << "Sorted" : cout << "Not sorted";
}