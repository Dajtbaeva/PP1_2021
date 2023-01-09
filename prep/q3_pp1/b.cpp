//The Da Vinci Code - cipher
#include <bits/stdc++.h>

using namespace std;

// // sort map by value
// bool mySort(pair<char, int> &p1, pair<char, int> &p2){
//     if(p1.second == p2.second){
//         return p1.first< p2.first;    
//     }
//     return p1.second < p2.second;
// }

// // print map through pointers
// void print(map<char, int> *m){
//     map<char, int> ::iterator it;
//     for(it = m->begin(); it != m->end(); it++){
//         cout << it->first << " " << it->second << endl;
//     }
// }

// void print2(vector<pair<char, int> > &v){
//     vector<pair<char, int> > ::iterator it;
//     for(it = v.begin(); it != v.end(); it++){
//         cout << (*it).first << " " << (*it).second << endl;
//     }
// }


// int main(){
//     string s;
//     cin >> s;
//     map<char, int> m;
    
//     for(int i=0; i<s.size(); i++){
//         m[s[i]]++;
//     }
//     print(&m);
//     cout << endl;
//     vector<pair<char, int> > v(m.begin(), m.end());
//     sort(v.begin(), v.end(), mySort);
//     print2(v);
    
//     return 0;
// }
// c - 99 -
// r - 114 
// y - 121
// s - 151
// t -
// a - 97 -> 122 97 + 25
// l -

int main(){
    string s, t;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        t[i] += char(int(s[i] + 25));
    }

    cout << t;
}