// Fence

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    stack<int> s;
    for(int i = 0; i < n; i++){
        cin >> k;
        if(!s.empty()){
            if(k > s.top()){
                while(k > s.top()){
                    s.pop();
                    if(s.empty()) break;
                }
                s.push(k);
            }
            else s.push(k);
        }else s.push(k);
    }
    cout << s.size();
    // 7 5 1 6 = 2 | 1 3 5 = 1 | 1 3 7 5 = 2
}