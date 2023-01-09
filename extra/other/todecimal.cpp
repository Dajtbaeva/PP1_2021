// from 2 to 10
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int k = 1;
    int n = 0, a; 

    for(int i = 0; i < s.size(); i++){
        a = int(s[i] - 48); 
        a = a * pow(2, s.size() - k);
        n += a;
        k++;
    }
    cout << n;
    
    return 0;
}