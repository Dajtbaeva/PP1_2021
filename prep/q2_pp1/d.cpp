#include <bits/stdc++.h>

using namespace std;

int main(){

    string a,b;
    int c = 0;

    getline(cin,a);
    b = a;
    reverse(a.begin(), a.end());

    if(b == a){
        for(size_t i = 0; i < a.size(); i++){
            if(a[0] != a[i]){
                c = 1;
            }
        }

        if(c == 0){
            cout << 0;
        }else{
            cout << a.size() - 1;
        }
    }else{
        cout << a.size();
    }
    
    return 0;
}