//поменять соседние элементы местами
#include <iostream>

using namespace std;

int main (){
    int n, t;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    if(n % 2 == 0){
    for(int i = 0; i < n; i = i + 2){
        t = a[i];
        a[i] = a[i + 1];
        a[i + 1] = t;
    }for(int i = 0; i < n; ++i){
        cout << a[i] << ' ';
    }}else{
    for(int i = 0; i < n - 1; i = i + 2){
        t = a[i];
        a[i] = a[i + 1];
        a[i + 1] = t;
    }for(int i = 0; i < n; ++i){
        cout << a[i] << ' ';
    }}
    
}