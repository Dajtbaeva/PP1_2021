// Endterms preparation

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int br = 0;

    for(int i = 1; i < n - 1; i += 2){
        if((a[i + 1] - a[i]) >= br) br = a[i + 1]  - a[i];
    }

    for(int i = 1; i < n - 1; i += 2){
        if(a[i + 1] - a[i] == br){
            cout << a[i] << " ";
            cout << br << endl;
        }
    }
    return 0;
}

/*
6
1 3 4 6 9 11
0 1 2 3 4 5
-------------------
6 3
Lessons were between (1, 3), (4, 6), (9, 11) 
Breaks are: 3->4, 6->9 Longest br startes at 
6 o'clock and duration was 3
*/