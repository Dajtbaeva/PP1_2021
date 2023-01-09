#include <bits/stdc++.h>

using namespace std;

int i = 0;
int fun(){
    i++;
    return pow(i, i);

}

int main(){
    int n;
    cin >> n;
    vector<int> v(n + 1);
    generate(v.begin(), v.end(), fun);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}