// VPSDU

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, p;
    cin >> n >> k;
    string s;
    vector<pair<string, int> > v;
    for(int i = 0; i < n; i++){
        cin >> s >> p;
        v.push_back(make_pair(s, p));
    }
    for(int i = 0; i < n; i++){
        if(v[i].second < 30){
            if(i - k >= 0) v[i].second =v[i - k].second;
            else v[i].second = v[n - i + k].second; 
        }
    }
    bool res = false;
    for(int i = 0; i < n; i++){
        if(v[i].second < 30){
            res = true;
            break;
        }
    }
    if(res == true) cout << "NO";
    else cout << "YES";
}
/*
5 1
Nurkanat 55
Bauka 60
Temirlan 60
Merei 29
Erkanat 45
----------------
YES
*/