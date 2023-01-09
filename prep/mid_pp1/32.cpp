#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int o = 0;
    int d = 0;
    int h = 0;
    char s;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s == 'O') o++;
        else if(s == 'D') d++;
        else if(s == 'H') h++;
    }

    cout << "Orks: " << o / 3 << '\n';
    cout << "Dragons: " << d / 3 << '\n';
    cout << "Humans: " << h / 3;
}