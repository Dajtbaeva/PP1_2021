// Adding Reversed Numbers

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    string x, z;
    while(n--){
        cin >> x >> z;
        int c = 0;
        for(int i = 0; i < x.size(); i++){
            c += (x[i] - 48) * pow(10, i);
        }
        int a = 0;
        for(int i = 0; i < z.size(); i++){
            a += (z[i] - 48) * pow(10, i);
        }
        int b = c + a;
        stringstream ss;
        ss << b;
        string ans = ss.str();
        int res = 0;
        for(int i = 0; i < ans.size(); i++){
            res += (ans[i] - 48) * pow(10, i);
        }
        cout << res << endl;
    } 
}
/*
3
24 1
4358 754
305 794
-------------
34
1998
1
*/