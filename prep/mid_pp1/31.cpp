// 12 1 23 32 100 21 -- true
// 12 12 33 22 45 21 -- false
// дан размер n (четное)
// 
#include <iostream>
using namespace std;

int myReverse(int a){
    int reversed_num = 0, rem;
    while (a != 0){
        rem = a % 10;
        reversed_num = reversed_num * 10 + rem;
        a /= 10;
    }
    return reversed_num;
}

int main(){
    
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; ++i){
        cin >> ar[i];
    }
    for (int i = 0; i < n / 2; ++i){
        if (ar[i] != myReverse(ar[n - 1 - i])){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}