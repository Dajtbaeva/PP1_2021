// Transaction, Эта программа должна возвращать сдачу клиенту с минимальным количеством монет

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x,one, two, five, ten, twenty, fifty, hundred;
    cin >> one >> two >> five >> ten >> twenty >> fifty >> hundred >> n;
    int sum = one + two * 2 + five * 5 + ten * 10 + twenty * 20 + fifty * 50 + hundred * 100; 
    vector<int>v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < n; i++){   
        if(sum - v[i] >= 0){
            cout << "Transaction accepted!" << endl;
            sum -= v[i];
        }
        else{
            cout << "Transaction stopped!" << endl;
        }
    }
}