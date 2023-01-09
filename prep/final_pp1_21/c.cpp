// Alphabet

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> m;
    for(int i = 0; i < s.size(); i++){
        if(m.find(s[i]) == m.end()) m.insert(make_pair(s[i], 1));
        else m[s[i]]++;
    }

    map<char, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}