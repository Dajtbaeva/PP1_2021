// Nurbol hacker

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    string nevv, old;
    cin >> n;
    vector<pair<string, string> > v, w;
    map<string, string> m;
    for(int i = 0; i < n; i++){
        cin >> nevv >> old;
        v.push_back(make_pair(nevv, old));
        w.push_back(make_pair(nevv, old));
    }
    vector<pair<string, string> > :: iterator itv;
    vector<pair<string, string> > :: iterator itw;
    for(itv = v.begin(); itv != v.end(); itv++){
        for(itw = w.begin(); itw != w.end(); itw++){
            if((*itv).second == (*itw).first){
                m.insert(make_pair((*itv).first, (*itw).second));
                w.erase((*itw).first);
            }
            else if((*itv).first == (*itw).first && (*itv).second == (*itw).second)
                m.insert(make_pair((*itv).first, (*itv).second));
        }
    }
    map<string, string> :: iterator itm;
    cout << m.size() << '\n';
    for(itm = m.begin(); itm != m.end(); itm++){
        cout << (*itm).first << " " << (*itm).second << endl;
    }
}
/*
6 v                                          w
Sens3i Danya                            Sens3i Danya
S1mple Papa                             S1mple Papa
M9snoyPovar AWPMaster                   M9snoyPovar AWPMaster
IAmNoob IAmPro                          IAmNoob IAmPro
Papa Sanya                              Papa Sanya
IAmPro IAmNoob                          IAmPro IAmNoob

---------------------
4
IAmNoob IAmNoob
M9snoyPovar AWPMaster
S1mple Sanya
Sens3i Danya
*/