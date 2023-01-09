// Unique elements
// Если последовательность состоит только из уникальных чисел, 
// то программа должна вывести YES, иначе NO.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        s.insert(a[i]);
    }
    if(s.size() == n) cout << "YES";
    else cout << "NO";
}