#include <bits/stdc++.h>

using namespace std;

bool comp(pair<pair<string, string>, string> &p1, pair<pair<string, string>, string> &p2){
    if(p1.first.first == p2.first.first) return p1.first.second < p2.first.second;
    return p1.first.first < p2.first.first;
}

int evens(string s){
    int a = 0; 
    for(int i = 0; i < s.size(); i++){
        if(int(s[i]) % 2 == 0) a++;
    }
    return a;
}

int main(){
    freopen("input.txt","r",stdin);
    int n;
    string k1 = "LOVE!";
    string k2 = "Nu shto ty bratishka pritih?";
    cin >> n;
    string s1, s2;
    int cnt1 = 0;
    int cnt2 = 0;
    vector<pair<pair<string, string>, string> > v;                                                   

    for(int i = 0; i < n; i++){
        cin >> s1 >> s2;
        for(int j = 0; j < s1.size(); j++){
            cnt1 = evens(s1);
        }
        for(int k = 0; k < s2.size(); k++){
            cnt2 = evens(s2);
        }
        if(cnt1 == cnt2){
            v.push_back(make_pair(make_pair(s1, s2), k1));
        }else v.push_back(make_pair(make_pair(s1, s2), k2));

        cnt1 = 0;
        cnt2 = 0;  
    }

    sort(v.begin(), v.end(), comp);
    vector<pair<pair<string, string>, string> > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << (*it).first.first << " + " << (*it).first.second << " = " << (*it).second << endl;
    }
}
