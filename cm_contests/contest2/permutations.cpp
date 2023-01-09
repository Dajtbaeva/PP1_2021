// Jax and string permutations
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size()){
        cout << "Impossible";
        return 0;
    }
    int cnt = 0;
    while(s != t){
        rotate(t.begin(), t.begin() + 1, t.end());
        cnt++;
        if(cnt > t.size()){
            cout << "Impossible";
            return 0;
        }
    }
    cout << cnt;
}
/*
Your task is to make a word s from word t and tell how many operations you need.
helloworld worldhello
5
*/
