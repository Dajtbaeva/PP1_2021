#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int sym = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && a[i][j] == a[j][i]){
                sym++;
            }
        }
    }
    
    if(sym == pow(n,2) - n){
        cout << "Yes";
    }else cout << "No";
    
}