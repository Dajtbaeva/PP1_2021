#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n][m];
    
    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0){
                cout << 0 << " ";
            } 
            else if(j == 0){
                cout << 0 << " ";
            } 
            else cout << i * j << " ";
        } cout << endl;
    }
}
/*
    for(int i = 0; i< n; i++){
            for(int j = 0; j < m; j++){
                a[i][j] = i * j; // чтобы с 1 начиналось нужно a[i + 1][j + 1]
        }
    }

    for(int i = 0; i< n; i++){
            for(int j = 0; j < m; j++){
                cout << a[i][j];
        }
    }    
*/