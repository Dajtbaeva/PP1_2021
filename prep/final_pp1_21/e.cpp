// You task is to find out the row in which total
// number of positive elements is bigger.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    vector<int> v(n, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            v[i] += (a[i][j] > 0); // boolean add 1 or 0
        }
    }
    set<int> s;
    for(int i = 0; i < v.size(); i++){
        s.insert(v[i]);
    }
    if(s.size() == 1){
        cout << "Numbers are equal\n";
        return 0;
    }
    int maxi = 0, ind = 0;
    for(int i = 0; i < v.size(); i++){
        if(maxi < v[i]){
            maxi = v[i];
            ind = i;
        }
    }
    cout << ind + 1;
}
/*
2 3
1 -1 3
2 2 2  -> 2
*/