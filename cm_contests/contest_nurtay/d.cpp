// Вещи в театре

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s, t, g;
    cin >> n;
    map<string, vector<string> > m;
    vector<string> v;

    for(int i = 0; i < n; i++){
        cin >> s;
        getline(cin, g);
        stringstream ss(g);
        while(ss >> t){
            v.push_back(t);
        }
        if(m.find(s) == m.end()) m.insert(make_pair(s, v));
        else{
            m[s].second.insert(v);
        }
        v.clear();
    }

    map<string, vector<string> > :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << ": ";
        for(int j = 0; j < (*it).second.size(); j++){
            if(j == (*it).second.size() - 1) cout << (*it).second[j] << '\n';
            else cout << (*it).second[j] << ", ";
        }
    }
}

/*
4
Damira Chair Scarf Spoon
Alexey Something Fork Bottle
Damira Pillow Towel
Mark Drinks Cakes Shoes
*/