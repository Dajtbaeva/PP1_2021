// arithmetic sequence
#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n, a, d, sum = 0;
    cin >> n >> a >> d;
    int s[n];
    for(int i = 0; i < n; i++){
        s[i]= a + i * d ;
        cout << s[i] << " ";
    }
    sum = ( 2 * a + (n - 1) * d ) * n / 2; 
    cout << "\n"<<"sum: " << sum;
}