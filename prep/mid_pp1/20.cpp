#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    int sum = 0;
    t = s;
    t.erase(t.begin());
    for(int i = 0; i < t.size(); i++){
        sum += t[i] - 48;
    }
    
    if(s[0] - 48 == sum % 10) cout << "YES";
    else cout << "NO";
    return 0;
    
}