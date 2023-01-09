// стрктура сет, add, count, present
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, x;
    string t;
    cin >> n;

    set<int> s;

    while(n--){
        cin >> t;
        if(t == "ADD"){
            cin >> x;
            s.insert(x);
        }
        else if(t == "PRESENT"){
            cin >> x;
            if(s.find(x) == s.end())
                cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        else if(t == "COUNT"){
            cout << s.size() << endl;
        }
    }
    
    return 0;
}