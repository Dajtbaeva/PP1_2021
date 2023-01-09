// Char checker
// Если символ из алфавита не встречался ни в одной из строк, то нужно вывести этот символ.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    set<char> ss;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            ss.insert(s[j]);
        }
    }
    if(ss.size() == 26) cout << "No such characters";
    for(int i = 97; i <= 122; i++){
        char c = i;
        if(ss.find(c) == ss.end()) cout << c;
    }
}
/*
3
llbxoyk
eriuqtx
icrmrdp
------------
afghjnsvwz


2
qwertyuiopasdfghjkl
zxcvbnm
------------
No such characters
*/