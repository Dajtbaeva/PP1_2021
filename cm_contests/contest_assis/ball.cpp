#include <bits/stdc++.h>

using namespace std;

int main(){
    double s, r;
    cin >> s >> r;
    double diametr = r * 2;
    if(diametr <= s) cout << "YES";
    else cout << "NO";
}