// Happy Nura's day

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int k, siz, sumi, ari;

    map<string, pair<vector<int>, int> > m;
    vector<int> w;

    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < 3; j++){
            cin >> k;
            w.push_back(k);
            sumi += k;
        } 
        ari = sumi / 3;
        m.insert(make_pair(s, make_pair(w, ari)));
        w.clear();
        ari = 0; sumi = 0;
    }

    map<string, pair<vector<int>, int> > :: iterator it = m.begin();
     for(it = m.begin(); it != m.end(); it++){
        if((*it).first.size() % 2 != 0){
            cout << (*it).first << ": ";
            for(int j = 0; j < (*it).second.first.size(); j++){
                if(((*it).second.first[j] - (*it).second.second) < 0) cout << 0 << " ";
                else cout << ((*it).second.first[j] - (*it).second.second) << " ";
            }  cout << endl;
        }else{
            cout << (*it).first << ": ";
            for(int j = 0; j < (*it).second.first.size(); j++){
                if(((*it).second.first[j] + (*it).second.second) > 255) cout << 255 << " ";
                else cout << ((*it).second.first[j] + (*it).second.second) << " ";
            }  cout << endl;
        }
    }
}
/*
3
green 123 23 134
blue 100 50 25
red 200 250 30
--------------
blue: 158 108 83 
green: 30 0 41
red: 40 90 0
*/
