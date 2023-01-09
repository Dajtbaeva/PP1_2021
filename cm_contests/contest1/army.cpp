#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << "Ne chetko";
        return 0;
    }
   
   int a[n][n];
   int b = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = b;
            
        } b += 2;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        } cout << endl;
    }
}
/*
1 1 1 1 1 
3 3 3 3 3
5 5 5 5 5
7 7 7 7 7
9 9 9 9 9
*/
