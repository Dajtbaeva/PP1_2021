//104
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(size_t i=0; i<s.size(); i++){
        if(int(s[i]) >= 97 && int(s[i]) <= 122){
            s[i] = char(int(s[i] - 32));
        }else{
            s[i] = char(int(s[i] + 32));
        }
    }
    cout << s;
    return 0;
}
/* char c;
cin >> c;
if (int(c) >=97 && int (c)<= 122){
    c = int (c - 32)
}*/
