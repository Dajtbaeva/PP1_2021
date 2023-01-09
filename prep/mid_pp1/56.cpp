//dexTohex
#include <bits/stdc++.h>

using namespace std;
string s;
string dexTohex(int a){
    
    if(a == 0) return s;
    if(a % 16 >=10 && a % 16 <= 15) s = char(a % 16 + 55) + s;
    else s =  char(a % 16 + 48) + s;
    return dexTohex(a / 16);
}

int main(){
    int n;
    cin >> n;
    cout << dexTohex(n);
}