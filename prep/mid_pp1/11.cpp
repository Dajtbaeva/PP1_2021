// Asman + Systems = Astems
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
    double n;
    char a;
    cin >> n >> a;

    if(a == 'k'){
        int r;
        cin >> r;
        cout << setprecision(r) << fixed << n / 1024;
    }
    else if(a == 'b'){
        cout << int(n) * 1024;
    }
}
