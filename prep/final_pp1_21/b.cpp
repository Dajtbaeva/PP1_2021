// Robot

#include <bits/stdc++.h>

using namespace std;

int n, m;
char a[6][6];
bool res;

void dfs(int i, int j){
    if(i == n - 1 && j == m - 1) res = true;
    if(i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#') return;
    a[i][j] = '#';

    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
}

int main(){
    //freopen("input.txt", "r", stdin);
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    if(a[n - 1][m - 1] == '#'){
        cout << "NO";
        return 0;
    }
    dfs(0, 0);
    (res) ? cout << "YES" : cout << "NO";
}
/*
3 3
.#.
..#
#..
YES
*/