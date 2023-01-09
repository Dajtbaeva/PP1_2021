// Internet

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string t = "";
    int c = 0, cnt = 0;
    int a = 1;
    cin >> s;
    vector<int> v;
    
    for(int i = 0; i < s.size(); i++){
        t += s[i];
        if(s[i] == '.'){
            for(int j = t.size(); j > 0; j--){
                c += (t[j] - 48) * a;
                a *= 10; 
            }
            v.push_back(c);
            t.clear();
            c = 0;
        } 
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i] >= 0 && v[i] <= 255) cnt++;
    }
    if(cnt == 4) cout << 1;
    else cout << 0;
}