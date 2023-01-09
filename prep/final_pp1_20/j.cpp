// Understandable have a nice day

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    string s1 = s, t1 = t;
    sort(s1.begin(), s1.end());
    sort(t1.begin(), t1.end());
    if(s1 != t1){
        cout << "Understandable have a nice day";
        return 0;
    }
    int cnt = 0, res = 0;
    vector<char> vt;

    for(int i = 0; i < t.size(); i++){
        vt.push_back(t[i]);
    }
    do{
       for(int i = 0; i < vt.size(); i++){
            if(vt[i] == s[i]) cnt++;
        }
        if(cnt == s.size()) break;
        cnt = 0;  res++; 
        rotate(vt.begin(), vt.begin() + 1, vt.end());
    }while(true);

    cout << res;
}
/*
abcde
deabc
-----------
2
*/