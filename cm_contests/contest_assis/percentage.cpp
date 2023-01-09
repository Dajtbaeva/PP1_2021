// Percentage of words

#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string, double> &p1, pair<string, double> &p2){
    return p1.second > p2.second;
}

int main(){
    string s, t;
    getline(cin, s);
    stringstream ss(s);
    map<string, double> m;

    int cnt = 0;
    while(ss >> t){
        for(int i = 0; i < t.size(); i++){
            t[i] = tolower(t[i]);
        }
        if(m.find(t) == m.end()) m[t] = 1;
        else m[t]++;
        cnt++;
    }
    
    vector<pair<string, double> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);
    vector<pair<string, double> > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << (*it).first << " : " << ((*it).second * 100) / cnt << "%" <<'\n';
    }
}
/*
Quick brown fox jumps over the lazy dog
brown : 12.5%
dog : 12.5%
fox : 12.5%
jumps : 12.5%
lazy : 12.5%
over : 12.5%
quick : 12.5%
the : 12.5%
*/