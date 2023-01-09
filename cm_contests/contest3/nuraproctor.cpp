// Nura proctor

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    vector<int> h, p;
    map<int, int> m;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(m.find(x) == m.end()) m.insert(make_pair(x, 1));
        else m[x]++;
    }
    map<int, int>:: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second == 1){
            h.push_back((*it).first);
        }else p.push_back((*it).first);
    }
    vector<int> :: iterator it1; // h
    vector<int> :: iterator it2; // p

    if(h.size() == 0){
        cout << "Zvonite mamam, u vas retake\n";
        cout << "Plo}{ie : ";
        for(it2 = p.begin(); it2 != p.end(); it2++){
            cout << *it2 << " ";
        } cout << endl;
    } 
    else if(p.size() == 0){
        cout << "Molodcy\n";
        cout << "}{oroshie : ";
        for(it1 = h.begin(); it1 != h.end(); it1++){
            cout << *it1 << " ";
        } cout << endl;
    }else{
        cout << "}{oroshie : ";
        for(it1 = h.begin(); it1 != h.end(); it1++){
            cout << *it1 << " ";
        } cout << endl;
        cout << "Plo}{ie : ";
        for(it2 = p.begin(); it2 != p.end(); it2++){
            cout << *it2 << " ";
        } cout << endl;
    }
}

/*
6
1 2 2 3 3 4
---------------
}{oroshie : 1 4 
Plo}{ie : 2 3
*/