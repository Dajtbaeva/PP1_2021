// Toilet of KSF

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n, k;
    string s;
    cin >> n;
    queue<pair<string, int> > q;

    while(n--){
        cin >> s >> k;
        q.push(make_pair(s, k));
    }
    int cnt = 0, minutes = 0;
    vector<string> ans;
    while(!q.empty()){
        q.front().second -= minutes;
        if(q.front().second <= 0){
            ans.push_back(q.front().first);
            cnt++;
        }else minutes++;
        q.pop();
    }
    cout << cnt << '\n';
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << '\n';
    }
}
/*
4
Johny 0
Mary 2
Bob 1
Sandy 2
-------------
2
Johny
Bob
*/