// Is it anagram? Программа должна "удалить" все слова-анаграммы
// и вывести только те слова, которые не являются анаграммами. Вывод
// слов должен идти в лексикографическом порядке (возрастающем).

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t, p, k = "";
    vector<string> v, ans;
    getline(cin, s);
    stringstream ss(s);
    while(ss >> p){
        v.push_back(p);
    }
    cin >> t;
    sort(t.begin(), t.end());
    for(int i = 0; i < v.size(); i++){
        k = v[i];
        sort(v[i].begin(), v[i].end());
        if(v[i] != t) ans.push_back(k); 
    }
    sort(ans.begin(), ans.end());
    if(ans.size() == 0){
        cout << "There is none left";
    }else{
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
    }
}
/*
abcd abc cba acb
abc
---------
abcd

this sentence contains five words
test
-----------
contains five sentence this words

kloun kolun kulon
uklon
--------------------
There is none left
*/