// Doubled pair
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    string t;
    for(int i = 0; i < s.size(); i++){
        if(int(s[i]) >= 48 && int(s[i]) <= 57){
            t = s[i] + t;
        } 
    }
    
    cout << t;
}