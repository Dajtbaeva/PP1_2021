// Nura cypher again

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t = "";
    int cnt = 0;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') cnt++;
        else if(s[i] == '1'){
            t += char('a' + cnt);
            cnt = 0;
        }
    }
    cout << t;
}
// 101001 - abc