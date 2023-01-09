#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while(cin >> s){
        for(int i = 0; i < s.size(); i++){
            if(!(s[i] >= '0' && s[i] <= '9'))
            cout << s[i];
        } cout << endl;
    }
}