// Easy problem

#include <bits/stdc++.h>

using namespace std;

bool square(int n){
    float sq = sqrt(n);
    if(floor(sq) == ceil(sq))
        return true;
    return false;
}
bool res(int n){
    if(n == 1)
        return true;
    if(n <= 0)
        return false;
    if(n % 2 != 0 && n % 3 != 0 && !square(n))
        return false;

    if(square(n) && n % 2 == 0 && n % 3 == 0)
        return res(n / 2) || res(n / 3) || res(ceil(sqrt(n)));
    else if(square(n) && n % 2 == 0 && n % 3 != 0)
        return res(n / 2) || res(ceil(sqrt(n)));
    else if(square(n) && n % 2 != 0 && n % 3 == 0)
        return res(n / 3) || res(ceil(sqrt(n)));
    else if(!square(n) && n % 2 == 0 && n % 3 == 0)
        return res(n / 2) || res(n / 3);
    else if(!square(n) && n % 2 != 0 && n % 3 == 0)
        return res(n / 3);
    else if(!square(n) && n % 2 == 0 && n % 3 != 0)
        return res(n / 2);
}
int main(){
    int n;
    cin >> n;
    if(res(n))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
// Функция ceil выполняет округление и возвращает ближайшее целое значение
// к val, но это значение будет не  меньше самого val - Значение с плавающей точкой.
// 3072 - YES, 5 - NO

