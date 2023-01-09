//calendar
//По заданному числу n от 1 до 365 определите, на какое число какого месяца
// приходится день невисокосного года с номером n: 1 -> 1; 90 -> 31, 3.

#include <iostream>

using namespace std;

int main(){
    int n, m; 
    cin >> n;
    int days [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    m = n;

    int sum = 0;
    for(int i = 0; i < 12; i++){
        sum += days[i];
        if(sum >= n){
            cout << m << " " << i + 1 << endl;
            break;
        }
        m = m - days[i];
    }
}