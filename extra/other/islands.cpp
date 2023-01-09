// Islands

#include <iostream>
using namespace std;
const int N = 5;

void observing(char ar[][N], int i, int j){
    if (i >= N || j >= N || i < 0 ||
        j < 0 || ar[i][j] == '.' ||
            ar[i][j] == '$') return;
    ar[i][j] = '$';
    observing(ar, i - 1, j); // north
    observing(ar, i + 1, j); // south
    observing(ar, i, j - 1); // west
    observing(ar, i, j + 1); // east
}

int main(){
    freopen("input.txt", "r", stdin);
    char ar[N][N];
    for(int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            cin >> ar[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            if (ar[i][j] == '*'){
                cnt++;
                observing(ar, i, j);
            }
        }
    }
    cout << cnt;

    return 0;
}