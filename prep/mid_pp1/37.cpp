#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    char arr[3][s.size() + 2];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < s.size() + 2; j++){
            arr[i][j] = '+';
        }
    }

    for(int i = 0; i < s.size() ; i++){
        arr[1][i + 1] = s[i];
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < s.size() + 2; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    
}