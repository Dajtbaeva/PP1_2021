// New word?

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < t.size(); j++){
            if(s.substr(i, s.size()) == t.substr(0, t.size() - j)){
                t.erase(0, t.size() - j);
                cout << s << t;
                return 0;
            }
        }
    }
    cout << s << t;
}
/*
boriska karamelka
----------------------
boriskaramelka

cat
dog
-----------------------
catdog
*/