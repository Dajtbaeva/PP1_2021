// Ashift
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, k;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;

    for (int i = 0; i < n; ++i) {
        int ind = (i - k + n) % n;
        cout << a[ind] << ' ';
    }
    cout << endl;

}