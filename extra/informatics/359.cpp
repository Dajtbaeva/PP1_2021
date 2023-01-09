#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int sum[n];
    for(int i = 0; i < n; i++){
        sum[i] = 0;
        for(int j = 0; j < m; j++){
            sum[i] += a[i][j];
        }
    }

    int cnt = 0;
    int max = sum[0];
    for(int i = 0; i < n; i++){
        if(max < sum[i]){
            max = sum[i];
        }
        while(true){
            max = sum[i];
            cnt++;
        }
    }

    if(cnt > 1){
        cout << cnt;
    }else cout << 1;
    return 0;
}