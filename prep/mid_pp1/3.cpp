//23 is 00010111
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "00000000";
    int n;
    cin >> n;

    for(int i = 7; i >= 0; i--){
        s[i] = char(n % 2 + 48);
        n /= 2;
    }

    string t = s;
    reverse(t.begin(), t.end());

    if(s == t){
        cout << "It works!";
    }else cout << "Sad";
    return 0;
}