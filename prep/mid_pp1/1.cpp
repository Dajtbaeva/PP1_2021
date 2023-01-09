// с десятичного в бинарный код с 0 до н и потом сиаутить сколько единиц 
#include <bits/stdc++.h>

using namespace std;
// if (i == s.size()) return 0;
// return ((s[i] - 48) * pow(2, s.size() - 1 - i)) + toDec(s, i + 1);

int main(){
    int n;
    cin >> n;
    int t, s[n];
    for(int i = 0; i <= n; i++){
        s[i] = 0;
    }

    for(int i = 0; i <= n; i++){
        t = i;
        while(t > 0){
            s[i] += t % 2;
            t /= 2;
        } 
    }

    for(int i = 0; i < n; i++){
        cout << s[i] << ',';
    } 
    cout << s[n];
    return 0;
}