// Cities, multimap
//n stran, m gorodov, для к городов ищем их страну, иначе ондай жок

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n, m;
    cin >> n;
    string s, g;
    vector<pair<string, string> > v;
    vector<pair<string, string> > :: iterator it;

    for(int i = 0; i < n; i++){
        cin >> s >> m;
        for(int j = 0; j < m; j++){
            cin >> g;
            v.push_back(make_pair(s, g));
        }
    }
    int a;
    int cnt;
    cin >> a;
    string t;
    for(int i = 0; i < a; i++){
        cin >> t;
        for(int j = 0; j < v.size(); j++){
            if(v[j].second == t){
                cout << v[j].first << endl;
                cnt = 0;
                break;
            }else cnt++;
        }
        if(cnt == v.size()) cout << "Ondai joq" << endl;
        cnt = 0;
    } 
}


// italy palermo
// italy venecia
// italy rome
// italy Pozitano
// germany Bavaria
// germany Berlin
// qz Almaty
// qz Uralsk
// qz Aksu
// qz akto


/*
3
Italy
4
Palermo Venezia Rome Pozitano
Germany
2
Bavaria Berlin
Qazaqstan
4
Almaty Uralsk Aksu Aktobe
5
Almaty
Berlin
Rome
Positano
New-York    


Qazaqstan
Germany
Italy
Ondai joq
Ondai joq
*/