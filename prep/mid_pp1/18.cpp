//Amount of percents
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    double even = 0; 
    double odd = 0;
    int i = 0;

    while(cin >> n){
        if(n < 0) break;
        if(n % 2 == 0) even ++;
        else odd ++;
        i++; //count number of elements
    }
    cout << setprecision(5) << fixed  << (even * 100) / i << " " << (odd * 100) / i;
}
