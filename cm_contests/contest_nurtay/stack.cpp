// stack

#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);

    string s, t;
    int n;
    stack<int> st;

    while(cin >> s){
        if(s == "push"){
            cin >> n;
            st.push(n);
            cout << "ok\n"; 
        } if(s == "pop"){
            if(st.empty()) cout << "error\n";
            else{
                cout << st.top() << '\n';
                st.pop();
            }
        } if(s == "back"){
            if(st.empty()) cout << "error\n";
            else{
                cout << st.top() << endl;
            }
        } if(s == "size"){
            if(!st.empty()) cout << st.size() << endl;
        } if(s == "clear"){
            while(!st.empty()){
                st.pop();
            }
            cout << "ok\n";
        } if(s == "exit"){
            cout << "bye\n";
            return 0;
        }
    }
}
/*
size
push 1
size
push 2
size
push 3
size
exit
*/