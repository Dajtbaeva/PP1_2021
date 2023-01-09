// Numerologist

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sumi = 0;
    int cnt = 0;
    if(s.size() == 1){
        cout << s << " " << 0 << endl;
        return 0;
    }
    while(s.size() > 1){
        for(int i = 0; i < s.size(); i++){
            sumi += s[i] - 48;
        }
        s.clear();
        while(sumi != 0){
            s = char(sumi % 10 + 48) + s;
            sumi /= 10;
        }
        cnt++;
    }
    cout << s << " " << cnt;
}