// Print all the numbers from range [a,b]  which contains digit 5 in ascending order.
#include <bits/stdc++.h>

using namespace std;

int i;
bool five(int i){
    while(i != 0){
        if(i % 10 == 5){
            return true;
        }
        i /= 10;
    }
    return false;
}

int main(){
    int a, b;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(five(i) == true) cout << i << " ";
    }
}