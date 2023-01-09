// Perfect pizza

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n, x;
    string shop, l1, l2, have;
    cin >> n;
    vector<pair<string, string> > v;
    set<string> s; 
    while(n--){
        cin >> shop;
    }
    cin >> x;
    while(x--){
        cin >> l1 >> l2;
        v.push_back(make_pair(l1, l2));
    }
    cin >> have;

    vector<pair<string, string> > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        if((*it).first == have) s.insert((*it).second);
        if((*it).second == have) s.insert((*it).first);
    }
    cout << s.size() << '\n';
    set<string> :: iterator its;
    for(its = s.begin(); its != s.end(); its++){
        cout << (*its) << " ";
    }
}
/*
7
tomato chicken meatballs pineapple ham
olives onion
6
pineapple chicken
tomato meatballs
ham onion
olives tomato
ham olives
chicken tomato
tomato
------------------------------
3
chicken meatballs olives
*/