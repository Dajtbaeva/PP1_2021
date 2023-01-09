#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    string s;
    string t = "";

    while(n--){
        cin >> s;
        t = s;
        reverse(s.begin(), s.end());
        if(s == t){
            cout << t << endl;
            cnt++;
        }
        t = "";
    }
    if(cnt == 0) cout << "NO";
}



#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string, int> &p1, pair<string, int> &p2){
    return p1.second > p2.second;
}

int main(){
    int n, m, x;
    int sumi = 0;
    cin >> n >> m;
    string s;
    vector<pair<string, int> > v;
    if(n == 0 && m == 0){
        cout << "error";
        return 0;
    }

    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < m; j++){
            cin >> x;
            sumi += x;
        } v.push_back(make_pair(s, sumi));
        sumi = 0;
    }

    vector<pair<string, int> > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << (*it).first << " - " << (*it).second << endl;
    }

    sort(v.begin(), v.end(), comp);
    for(it = v.begin(); it != v.end(); it++){
        cout << "The best:\n" << (*it).first << " " << (*it).second;
        return 0;
    }

}