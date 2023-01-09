// 90 degree vector
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <vector <int> > vv;
    vector <int> vv1;
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            vv1.push_back(x);
        }
        vv.push_back(vv1);
        vv1.clear();
    }
    for (int j = 0; j < vv.size(); j++) {
        for (int i = vv[j].size()-1; i >= 0;i--) {
              
            cout << vv[i][j] << ' ';
        }
        cout << endl;
    }
}