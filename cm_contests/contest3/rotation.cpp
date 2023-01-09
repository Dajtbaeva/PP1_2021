// Rotation

#include <bits/stdc++.h>

using namespace std;

void rotate(vector<int> &v, int k){
    vector<int> w = v;
    int a = v.size();
    for(int i = 0; i < v.size(); i++){
        v[(i + k) % a] = w[i];
    }
}

int main(){
    int n, x, k;
    cin >> n >> k;
    vector<int> v;

    while(n--){
        cin >> x;
        v.push_back(x);
    }
    rotate(v, k);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}
/*
Rotate vector to right to k positions
10 4
1 6 5 4 3 7 2 8 9 10
--------------------
2 8 9 10 1 6 5 4 3 7
*/