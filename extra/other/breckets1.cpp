// Bracket sequence

#include <bits/stdc++.h>

using namespace std;

int main(){
    string t;
    cin >> t;
    stack<char> s;

    bool res = true;
    for(int i = 0; i < t.size(); i++){
        if(t[i] == '(') s.push(t[i]);
        else{
            if(s.empty()){
                res = false;
                break;
            }else s.pop();
        }
    }
    if(res == true && s.empty()) cout << "YES";
    else cout << "NO";
}