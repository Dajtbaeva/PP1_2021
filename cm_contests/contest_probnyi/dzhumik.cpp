// Jumadildaev’s bonus points
// 4
// 5 3 D +
// 5 3 (3*2) (3+(3*2))
// 5 2 C D +
// 5, 10, 15 = 30

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n, res;
    cin >> n;
    char c;
    stack<int> s;

    for(int i = 0; i < n; i++){
        cin >> c;
        if(c == '+'){
            int first = s.top(); s.pop();
            int second = s.top(); s.pop();
            s.push(second); s.push(first);
            s.push(first + second);
        }else if(c == 'D'){
            int k = 2 * s.top();
            s.push(k);
        }else if(c == 'C'){
            s.pop();
        }else s.push(int(c - 48));
    }

    vector<int> v;
    int sumi = 0;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    for(int j = 0; j < v.size(); j++){
        sumi += v[j];
    }

    cout << sumi;
}