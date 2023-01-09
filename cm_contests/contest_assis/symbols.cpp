#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    char c;
    map<char, int> m;
    for(int i = 0; i < s.size(); i++){
        c = tolower(s[i]);
        if(m.find(c) == m.end()) m.insert(make_pair(c, 1));
        else m[c]++;
    }
    int maxi = 0;
    map<char, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second > maxi) maxi = (*it).second;
    }
    bool same = true;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second != maxi) same = false;
    }
    if(same){
        cout << "All gone!";
        return 0;
    }else{
        for(int i = 0; i < s.size(); i++){
            for(it = m.begin(); it != m.end(); it++){
                if((*it).second == maxi) continue;
                if((*it).first == tolower(s[i])) cout << s[i];
            }
        }
    }
}
/*
HelloWorld
---------------
HeoWord
*/