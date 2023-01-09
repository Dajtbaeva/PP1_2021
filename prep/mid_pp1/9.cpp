//Asman + Bin = Asin
#include <bits/stdc++.h>

using namespace std;

string s;
string tobinary(int x){
    if(x == 0) return s;
    return tobinary(x / 2) + char(x % 2 + 48); 
}

int main(){
    int n;
    cin >> n;
    int zero = 0;
    int one = 0;
    cout << tobinary(n) << endl;
    string t = tobinary(n);
    for(int i = 0; i < t.size(); i++){
        if(t[i] == '0') zero++;
        else one ++;
    }
    cout << "zeros " << zero << endl << "number of units " << one;
}

