// Random pair generator
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    map<pair<int, int>, int> m;
    map<pair<int, int>, int> :: iterator it;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        if(a <= b){
            cout << m[make_pair(a, b)] << endl;
            m[make_pair(a, b)]++;
        }else{
            cout << m[make_pair(b, a)] << endl;
            m[make_pair(b, a)]++;
        }
    }

    // for(it = m.begin(); it !=m.end(); it++){
    //     cout << (*it).first.first << " " << (*it).first.second << ": " << (*it).second << endl;
    // }
    return 0;
}