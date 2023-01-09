#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    string t = "@gmail.com";

    for(int i = 0; i < n; i++){
        cin >> s;
        if(s.find(t) != string :: npos){
            s.erase(s.find(t), 10);
            cout << s << endl;
        }
    }
}