// Perfect numbers
#include <bits/stdc++.h>

using namespace std;

bool isperfect(int a){
    if(a % 3 == 0) return true;
    else return false;
}

int main(){
    int n, cnt = 0;
    while(cin >> n){
        if(isperfect(n) == true) cnt++;
        else if(isperfect(n) == false){
            cout << cnt;
            break;
        }
    }
}