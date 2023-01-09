// Internet

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string t[5] = {""};
    int a = 0, cnt = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.'){
            a++;
        }else t[a] += s[i];
    }

    for(int i = 0; i < 4; i++){
        if(stoi(t[i]) >= 0 && stoi(t[i]) <= 255) cnt++;
    }
    if(cnt == 4) cout << 1; // 127.0.0.1
    else cout << 0; // 256.0.0.1
}