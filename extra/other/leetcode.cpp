// 2[abc]3[a] -> abcabcaaa
// 7[mi]1[ijh]0[zy] -> mimimimimimimiijh

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    queue<char> q;
    for(int i = 0; i < s.size(); i++){
        q.push(s[i]);
    }
    string res = "";
    while(!q.empty()){
        if(q.front() >= 48 && q.front() <= 57){
            int a = q.front() - 48;
            q.pop(); q.pop(); // '['
            string t = "";
            while(q.front() != ']'){
                t += q.front();
                q.pop();
            } q.pop(); // ']'
            while(a--){
                res += t; 
            }
        }
    }
    cout << res;
}