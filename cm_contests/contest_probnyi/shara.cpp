// Shara the bandit, 2 queue
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int cnt = 0;
    int n;
    cin >> n;
    string s1, s2;

    queue<string> q1;
    for(int i = 0; i < n; i++){
        cin >> s1;
        q1.push(s1);
    }

    int k;
    cin >> k;
    queue<string> q2;
    for(int i = 0; i < k; i++){
        cin >> s2;
        q2.push(s2);
    }

    while(!q2.empty()){
        string first = q1.front(); q1.pop();
        string second = q2.front(); 
        if(first == second){
            q2.pop();
            cnt++;
        }else{
            q1.push(first);
            cnt++;
        }
        if(cnt >= 14){
            cout << "Shara is crying((";
            return 0;
        }
    }
    cout << "Shara is dovolen in: "  << cnt << " days";
}

/*
7
camry70
e39
gls63amg
volchok
vaz2106
rav4
lx600
4
volchok
camry70
rav4
lx600

Shara is dovolen in: 13 days

4
lx570
qx80
x7
cobalt
3
cobalt
cobalt
cobalt

Shara is crying((
*/