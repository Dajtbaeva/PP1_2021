// Internet

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string t = "";
    int chislo = 0, cnt = 0;
    int a = 1;
    cin >> s;
    vector<int> v;
    
    for(int i = 0; i < s.size(); i++){
        t += s[i];
        if(s[i] == '.'){
            for(int j = t.size(); j > 0; j--){
                chislo += (t[j] - 48) * a;
                a *= 10; 
            }
            v.push_back(chislo);
            t.clear();
            chislo = 0;
        } 
    }

    for(int x = 0; x < v.size(); x++){
        cout << v[x] << " ";
    }
}