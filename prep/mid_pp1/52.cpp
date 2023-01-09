// One piece!
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v(32, 0); // 32 zeros
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        int j = s[i] - 'a';
        v[j]++; 
    }

    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        int x = v[i];
        if(x % 2 == 1) cnt++;
    }

    if(cnt > 1) cout << "Onepiece";
    else cout << "Luffy is the pirate king!";
    return 0;
}