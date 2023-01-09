// Recursion for Bakytzhan

#include <bits/stdc++.h>

using namespace std;

string s = "";
string rec(string g, int i){
    if(g.size() == i) return s;
    if(g[i] == '(') g[i] = ')';
    s = g[i] + s;
    return rec(g, i + 1);
}

int main(){
    string t;
    cin >> t;
    cout << t << rec(t, 0);
}
/*
(abc(def(g
--------------------------
(abc(def(gg)fed)cba)
*/
