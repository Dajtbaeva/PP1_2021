//Anagram
#include <bits/stdc++.h>

using namespace std;


int main(){
    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end()); 
    sort(t.begin(), t.end());

    if(s == t) cout << "Anagram";
    else cout << "Not anagram";
}


// string s = "abcde";
//     string t = "deabc";
//     string s1 = s, t2 = t;
//     sort(s1.begin(), s1.end()); sort(t2.begin(), t2.end());
//     if (s1 != t2){
//         cout << "Impossible";
//         return 0;
//     }
//     int cnt = 0;
//     while(s != t){
//         cnt++;
//         rotate(s.begin(), s.begin() + 1, s.end());
//         cout << s << endl;
//     }
//     cout << cnt << endl;

//     if(cnt == s.size()) cout << "Anagram";
//     else cout << "Not anagram";