// Nuracypher

#include <bits/stdc++.h>

using namespace std;

char cyp(int cnt){
    return ('a' + cnt % 26);
}

int main(){
    map<char, int> m;
    string s; 
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        m[s[i]]++;
    }
    map<char, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << it->first << cyp(it->second);
    }
}
/*
aaabbbcccdddzzz
a - 3, 3rd letter after 'a' is 'd'
------------------------
adbdcdddzd
*/