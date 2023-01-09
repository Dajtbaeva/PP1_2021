// Очередь за билетами

#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, pair<string, string> > &p1, pair<int, pair<string, string> > &p2){
    return p1.first < p2.first;
}

int main(){
   
    int n, m;
    string y, f;
    cin >> n;
    vector<pair<int, pair<string, string> > > v;

    for(int i = 0; i < n; i++){
        cin >> m >> y >> f;
        v.push_back(make_pair(m, make_pair(y, f)));
    }

    sort(v.begin(), v.end(), comp);
    vector<pair<int, pair<string, string> > > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << (*it).second.first << " " << (*it).second.second <<'\n';
    }
}