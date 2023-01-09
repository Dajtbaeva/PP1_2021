#include <iostream>
#include <cmath>
using namespace std;

string toBin(int a){
    if (a == 0) return "";
    return toBin(a / 2) + char((a % 2) + 48);
}

void addZeros(string &s){
    while(s.size() != 8){
        s = '0' + s;
    }
}

int toDec(string s){
    int sum = 0;
    for (int i = 0; i < s.size(); i++){
        sum += int(s[i] - 48) * pow(2, s.size() - i - 1);
    }
    return sum;
}

void swapBits(string &s1, string &s2, int n){
    int temp = s1[s1.size() - 1 - n];
    s1[s1.size() - 1 - n] = s2[s2.size() - 1 - n];
    s2[s2.size() - 1 - n] = temp;
}

int main(){
    freopen("input.txt", "r", stdin);
    int bit_no, first, second;
    cin >> bit_no >> first >> second;
    string s1 = toBin(first), s2 = toBin(second);
    addZeros(s1);
    addZeros(s2);
    swapBits(s1, s2, bit_no);
    // cout << toDec(s1) << ' ' << toDec(s2);
    if (toDec(s1) > toDec(s2)){
        cout << "1";
    } else if (toDec(s1) < toDec(s2)){
        cout << "2";
    } else cout << "equal";
    
    return 0;
}