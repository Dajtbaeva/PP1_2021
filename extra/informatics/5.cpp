//106
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int cnt=0;

    for(size_t i=0; i<s.size(); i++){
        if(s[i] == ' '){
            cnt++;
        }
    }
    cout << cnt + 1;
    return 0;
}