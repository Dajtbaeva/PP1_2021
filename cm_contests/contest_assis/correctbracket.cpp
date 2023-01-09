// Correct bracket sequence

#include <bits/stdc++.h>

using namespace std;

bool brac(string g){
    stack<char> st;
    for(int i = 0; i < g.size(); i++){
        if(g[i] == '(' || g[i] == '{' || g[i] == '[' || g[i] == '<') st.push(g[i]);
        else{
            if(st.empty()) return false;
            char top = st.top();
            st.pop();
            if(top == '(' && g[i] != ')' || top == '{' && g[i] != '}' || 
                top == '[' && g[i] != ']' || top == '<' && g[i] != '>') return false;
        }
    }
    return st.empty();
}

int main(){
    int n;
    cin >> n;
    string s;
    string t = "";

    for(int j = 0; j <= n; j++){
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')' || s[i] == '(' || s[i] == '}' || s[i] == '{' || 
                s[i] == ']' || s[i] == '[' || s[i] == '>' || s[i] == '<') t += s[i];
        }
    }
    brac(t) ? cout << "YES" : cout << "NO";
}
/*
5
#include <iostream>
int main()
{
    printf("Hello world!");
}
-------------------------
YES
*/
