// 5
// 7 15 59 147 371
// hello
#include <bits/stdc++.h>
using namespace std;

char backhash(int n, int ind){
    return (n / pow(2, ind) + 97);
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    stack<int> st;
    string answer = "";
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        int temp = x;
        if (!st.empty()){
            temp -= st.top();
        }
        st.push(x);
        answer += backhash(temp, i);
    }

    cout << answer;

    return 0;
}