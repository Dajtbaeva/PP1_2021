// Degree of person

#include <bits/stdc++.h>

using namespace std;

bool comp(pair<pair<string, string>, int> &p1, pair<pair<string, string>, int> &p2){
    if(p1.second == p2.second){
        if(p1.first.first == p2.first.first) return p1.first.second < p2.first.second;
        return p1.first.first < p2.first.first;
    }
    return p1.second > p2.second;
}

int main(){
    freopen("input.txt", "r", stdin);
    int a;
    cin >> a;
    string n, s;
    int d, r1 = 0, r2 = 0;
    vector<pair <pair<string, string>, int > > v;

    for(int i = 0; i < a; i++){
        cin >> n >> s;
        for(int i = 0; i < n.size(); i++){
            r1 += int(n[i]);
        }

        for(int j = 0; j < s.size(); j++){
            r2 += int(s[j]);
        }
        d = r1 - r2;
        v.push_back(make_pair(make_pair(n, s), d));
        d = 0; r1 = 0; r2 = 0;
    }

    sort(v.begin(), v.end(), comp);
    vector<pair <pair<string, string>, int > > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << (*it).first.first << " " << (*it).first.second << " " << (*it).second << '\n';
    }
}

/*
4
Albert Einstein
Nazeek Basekeevich
Sharafitdin Jangaliev
Che Guevara


Sharafitdin Jangaliev 220
Albert Einstein -229
Che Guevara -443
Nazeek Basekeevich -508
*/