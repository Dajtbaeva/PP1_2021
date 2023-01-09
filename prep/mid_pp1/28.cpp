// Asman + Array = Asay
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string t = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') t += s[i];
    }
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '1') t +=s[i];
    }

    cout << t;
}