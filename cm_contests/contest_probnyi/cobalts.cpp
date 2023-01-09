// Jaqs and Cobalts
// тут нужно сказать есть ли достаточно уникальных номеров в этом списке
// если да, то вывести их в порядке приоритета
// приоритет выше, чем больше 7 и J в этом номере

#include <bits/stdc++.h>

using namespace std;

bool jaqslikes(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '7' || s[i] == 'J') return true;
    }
}

bool comp(pair <string,int> &p1, pair <string,int> &p2) {
    if (jaqslikes(p1.first)) return p1.first > p2.first;
    else return p1.first < p2.first;
}

int main(){
    freopen("input.txt","r",stdin);
    int k, n; 
    cin >> k >> n;
    map <string, int> m;
    string s;

    while (n--){
        cin >> s;
        m[s]++;
    } 
    
    vector <pair <string, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);
    if(k > m.size()) {
        cout << "Jaqs is mad\n";
        return 0;
    }else{
        cout << "Jaqs likes it\n";
        for (int i = 0; i < k; i++) {
            cout << v[i].first << " ";
        }
    }
    return 0;
}

/*
5 7
777AEK
123JJJ
678LKG
777AEK
123JJJ
678LKG
344FFF

Jaqs is mad


5 7
007BBE
916AEK
196PDA
004TRD
824LDB
860MVA
002RAM

Jaqs likes it
007BBE 002RAM 004TRD 196PDA 824LDB
*/
