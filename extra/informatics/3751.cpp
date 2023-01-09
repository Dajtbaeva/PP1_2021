//Количество совпадающих
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector<string> v1;
    vector<string> v2;

    string pat = "";
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == ' '){
            v1.push_back(pat);
            pat = "";
        }else{
            pat += s1[i];
        }
    }
    v1.push_back(pat);
    pat = "";

    for(int i = 0; i < s2.size(); i++){
        if(s2[i] == ' '){
            v2.push_back(pat);
            pat = "";
        }else{
            pat += s2[i];
        }
    }
    v2.push_back(pat);

    map<string, bool> m;
    for(int i = 0; i < v1.size(); i++){
        m[v1[i]] = true;
    }

    for(int i = v2.size() - 1; i >= 0 ; i--){
        if(m[v2[i]] == true) cout << v2[i] << " ";
    }

    return 0;
}