// Baukina zadacha, common characters

#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int n;
    cin >> n;
    map<char, int> m;
    vector<char> ans;
    for(int i = 0; i < n; i++){
        string t;
        cin >> t;
        set<char> s;
        for(int j = 0; j < t.size();j++){
            t[j] = tolower(t[j]);
            s.insert(t[j]);
        }
        set<char> :: iterator it;
        for(it = s.begin(); it != s.end(); it++){
            m[(*it)]++;
        }
    }
    bool swt = false;
    map<char, int>:: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second == n) {
            cout << (*it).first << " ";
            swt = true;
        }
    }
 
    if(swt == false) cout << "No common characters";
}
