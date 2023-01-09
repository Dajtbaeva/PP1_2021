#include <bits/stdc++.h>

using namespace std;

// bool pal(string s, int j){
//     if(s[j] == s[s.size() - j - 1]) return true;
//     else return false; 
// }

int main(){
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if( t == s) cout << "YES";
    else cout << "NO";
    // pal(s, 0) ? cout << "YES" : cout << "NO";
}