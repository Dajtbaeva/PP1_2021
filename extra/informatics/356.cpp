// Состязания
#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int a[n][m];
    /*
    2 2 -> d[0] = 4
    5 4 -> d[1] = 9
    3 5 -> d[2] = 8
    */

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    int d[n]; // сумма бросков
    for(int i = 0; i < n; ++i){
        d[i] = 0;
        for(int j = 0; j < m; ++j){
            d[i]= d[i] + a[i][j];
        }
    }
    
    int pos = 0; //номер игрока
    int val = d[0]; //сумма баллов игрока
    for(int i = 0; i < n; ++i){
        if(val < d[i]){
            val = d[i];
            pos = i;
        }
    }
    cout << val << endl << pos << endl;

    return 0;
}