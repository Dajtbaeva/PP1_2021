#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> &p1, pair<int, int> &p2){
    return p1.second > p2.second;
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int cnt = 0, cnt2 = 0;
    vector<pair<int, int> > v;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] > 0) cnt++;
        }
        v.push_back(make_pair(i, cnt)); 
        cnt = 0;
    }
    vector<pair<int, int> > :: iterator it;
    int maxi = 0;
    
    for(it = v.begin(); it != v.end(); it++){
        if((*it).second > maxi) maxi = (*it).second; 
    }

    sort(v.begin(), v.end(), comp);
    for(it = v.begin(); it != v.end(); it++){
        if((*it).second == maxi) cnt2++;
    }
    if(cnt2 == v.size()){
        cout << "Numbers are equal";
        return 0;
    }
    for(it = v.begin(); it != v.end(); it++){
        cout << (*it).first;
        return 0;
    }
}