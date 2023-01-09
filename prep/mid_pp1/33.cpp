// Nearest number

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    int ind = 0; 
    int ans = abs(a[0] - k);

    for(int i = 1; i < n; i++){
        int cur = abs(a[i] - k);
        if(cur < ans){
            ans = cur;
            ind = i;
        }
    }
    cout << ind << '\n';
}

// 6
// 7 8 -10 4 2 -1
// 2 3  15  1 3  6
// 0 1   2  3 4  5