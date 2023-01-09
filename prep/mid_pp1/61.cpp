#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s, t;
    cin >> n;
    long long p[n], q[n];
    double ck = 0, mx = 1e9;
    for(int i = 0; i < n; i++){
        cin >> s >> p[i] >>  q[i];
        ck = 1.0*p[i] / q[i];
        if(mx > ck){
            mx = ck;
            t = s;
        }
    }cout << t ;
}