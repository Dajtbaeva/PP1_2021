// Deadlines

#include <bits/stdc++.h>

using namespace std;

map<string, int> m;
bool comp(pair<string, pair<string, int> > &p1, pair<string, pair<string, int> > &p2){
    if(p2.second.first != p1.second.first) return m[p2.second.first] > m[p1.second.first];
    else if(p2.second.first == p1.second.first && p2.second.second != p1.second.second){
        return p2.second.second < p1.second.second;
    }else if(p2.second.first == p1.second.first && p2.second.second == p1.second.second){
        return p2.first < p1.first;
    }
}

int main(){
    freopen("output.txt", "w", stdout);
    m["Monday"] = 1;
    m["Tuesday"] = 2;
    m["Wednesday"] = 3;
    m["Thursday"] = 4;
    m["Friday"] = 5;
    m["Saturday"] = 6;
    
    string sub, day;
    int n, k;
    queue<pair<string, pair<string, int> > > q;
    cin >> n;
    vector<pair<string, pair<string, int> > > v;
    for(int i = 0; i < n; i++){
        cin >> sub >> day >> k;
        v.push_back(make_pair(sub, make_pair(day, k)));
    }
    vector<string> res;
    int cd = 0;
    sort(v.begin(), v.end(), comp);
    vector<pair<string, pair<string, int> > > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        q.push(*it);
        cout << (*it).first << " " << (*it).second.first << " " << (*it).second.second << '\n';
    }
    while(!q.empty() && cd < 6){
        int total = 0;
        if(cd >= m[q.front().second.first]){
            res.push_back(q.front().first);
            q.pop();
        }
        if(q.empty()) break;
        while(!q.empty() && total + q.front().second.second <= 10 ){
            total += q.front().second.second;
            q.pop();
        }
        cd++;
    }
    if(res.empty()) cout << "YES\n";
    else{
        cout << "NO\n";
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
    }
}
/*
4
ADS Friday 10
Russian Monday 9
OOP Monday 7
Web-Dev Wednesday 8
-------------------
Russian Monday 9
OOP Monday 7
Web-Dev Wednesday 8
ADS Friday 10
NO
OOP
*/