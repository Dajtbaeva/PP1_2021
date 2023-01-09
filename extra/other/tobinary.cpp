// перевести число из десятичной системы исчисления в шестнадцатиричную
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
   
    string s = "";

        while(n != 0){
            s = char(n % 16 + 48) + s;
            n /= 16;
        }
        cout << s << " ";
    return 0;
}