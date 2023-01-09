//Beautiful Strings

#include <bits/stdc++.h>

using namespace std;

map<char, int> m;
bool correct(string s, int n){
    map<char, int> :: iterator it;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    int z = m[s[0]];
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second != z){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    int n;
    cin >> s >> n;
    string t = s.substr(0, n);
    if(!correct(s, n) || s.size() % n != 0){
        cout << "look at the road!";
        return 0;
    }
    int cnt = 0;
    for(int i = n; i <= s.size() - n; i += n){
        string res = s.substr(i, n);
        do{
            if(res == t) break;
            cnt++;
        }while(next_permutation(res.begin(), res.end()));
    }
    cout << cnt;
}   
/*
abcbcacba 3 = 4
Permutations of 'abc': abc acb bac bca cab cba
for 'bca' becoming 'abc' needed 3 steps;
for cba becoming 'abc' needed 1 step; 
3 + 1 = 4
*/
