#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    int n, m, k, cnt = 0, cnt1 = 0, cnt2 = 0;
    string s1, s2, s3;
    cin >> n;
    vector<string> v1, v2, v3, ans, w1, w2, w3;
    while(n--){
        cin >> s1;
        v1.push_back(s1);
    }
    cin >> m;
    while(m--){
        cin >> s2;
        v2.push_back(s2);
    }
    cin >> k;
    while(k--){
        cin >> s3;
        v3.push_back(s3);
    }
    bool b1, b2, b3;
    for(int i = 0; i < v1.size(); i++){
        if(find(v2.begin(), v2.end(), v1[i]) == v2.end()){
            w1.push_back(v1[i]);
        }
    } 
    if(w1.size() == 0) cout << -1;
    else{
        for(int i = 0; i < w1.size(); i++){
            cout << w1[i] << " ";
        }
    }
    cout << '\n';
    
    for(int i = 0; i < v2.size(); i++){
        if(find(v1.begin(), v1.end(), v2[i]) == v1.end()){
            w2.push_back(v2[i]);
        } 
    } 
    if(w2.size() == 0) cout << -1;
    else{
        for(int i = 0; i < w2.size(); i++){
            cout << w2[i] << " ";
        }
    } cout << '\n';
    
    for(int i = 0; i < v3.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            if(v3[i] == v2[j]) ans.push_back(v3[i]);
        } 
    } 
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < v1.size(); j++){
            if(ans[i] == v1[j]){
                w3.push_back(ans[i]);
            }
        } 
    }
    if(w3.size() == 0) cout << -1;
    else{
        for(int i = 0; i < w3.size(); i++){
            cout << w3[i] << " ";
        }
    } cout << '\n';
}