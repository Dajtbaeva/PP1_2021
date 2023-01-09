// A -> 1, B -> 2, C -> 3, Z -> 26, AA -> 27 etc.
#include <bits/stdc++.h>
using namespace std;
int titletonumber(string t){
    long long pow = 0;
    for(int i = 0; i < t.size(); i++){
        pow = pow * 26 + ((int)t[i] - 'A' + 1);
    }
    return pow;
}

int main(){
    string s;
    cin >> s;
    cout << titletonumber(s);
}
