// Состязания-2
#include <iostream>

using namespace std;

int main (){
    int n, m;
    cin >> n >> m;
    
    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    int r = 0; 
    int c = 0;
    int best = -1; // самый максимум из всего массива
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            best = max(best, a[i][j]);
            if(best == a[i][j]){
                r = i;
                c = j;
            }
        }   
    }
    

    cout << best << endl;
    cout << r << " " << c;
    
    return 0;
}