#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string str;
    stack<char> st;
    int index = 0;
    bool f = true, g = true, k = true;
    cin >> str;
    while (index < str.length() && f && g && k)
    {
        char chr = str[index];
        if (chr == '[' || chr == '{' || chr == '(') st.push(chr);
        if (chr == ')') f = (!st.empty() && st.top() == '(');
        if (chr == ']') g = (!st.empty() && st.top() == '[');
        if (chr == '}') k = (!st.empty() && st.top() == '{');
        index++;
    }
    cout << (k && f && g && st.empty() ? "YES" : "NO") << endl;
    return 0;
}
