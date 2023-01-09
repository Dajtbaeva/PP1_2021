// Valid date
#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, m, y, feb;
    cin >> d >> m >> y;
    bool correct = true;

    if(y % 4 == 0) feb = 29;
    else feb = 28;
    if(m < 1 || m > 12) correct = false;
    else if(d < 1 || d > 31) correct = false;
    else if(m == 4 || m == 6 || m == 9 || m == 11) correct = false;
    if(m == 2 && d > feb) correct = false;

    if(correct) cout << "Yes";
    else cout << "No";

}