//сдвинуть все  вправо
#include <iostream>

using namespace std;

int main (){
    int n, t;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }cout << a[n - 1] << ' ';
    for(int i = 0; i < n - 1; ++i){
        cout << a[i] << ' ';
    }
    
}