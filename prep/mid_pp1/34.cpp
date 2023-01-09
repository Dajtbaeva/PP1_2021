// Rock Paper Scissors
#include <bits/stdc++.h>

using namespace std;

int main(){
    char c1[15], c2[15];
    int p1 = 0, p2 = 0;

    for(int i = 0; i < 15; i++){
        cin >> c1[i];
    }

    for(int i = 0; i < 15; i++){
        cin >> c2[i];
    }

    for(int i = 0; i < 15; i++){
        if((c1[i] == 'S' && c2[i] == 'P') || (c1[i] == 'P' && c2[i] == 'R') || (c1[i] == 'R' && c2[i] == 'S')) p1++;
        else if(int(c1[i]) == int(c2[i])){
        }else p2++;
    }

    if(p1 > p2) cout << "First player wins!";
    else if(p1 < p2) cout << "Second player wins!";
    else cout << "Friendship";
}