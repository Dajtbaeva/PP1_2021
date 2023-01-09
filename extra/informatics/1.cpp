//102
#include <iostream>
using namespace std;

int main(){
    string c;
    cin >> c;

    for(size_t i=0; i<c.size(); i++){
        if(int(c[i]) >= 48 && int(c[i] <= 57)){
            cout << "yes";
        }else{
            cout << "no";
        }
    }
    return 0;
}