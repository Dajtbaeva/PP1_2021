// Snova pro Stipuhu

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    string s, mark;
    float gpa, sumi = 0;
    int credits = 0;

    while(n--){
        cin >> s >> mark >> k;
        credits += k;
        if(mark == "A") gpa = 4;
        else if(mark == "A-") gpa = 3.67;
        else if(mark == "B+") gpa = 3.33;
        else if(mark == "B") gpa = 3;
        else if(mark == "B-") gpa = 2.67;
        else if(mark == "C+") gpa = 2.33;
        else if(mark == "C") gpa = 2;
        else if(mark == "C-") gpa = 1.67;
        else if(mark == "D+") gpa = 1.33;
        else if(mark == "D") gpa = 1;
        else if(mark == "D-") gpa = 0.67;
        else if(mark == "F") gpa = 0;
        sumi += gpa * k;
    }
    if((sumi / credits) >= 1.65) cout << "Shikuem";
    else cout << "Alo, mama?";
}