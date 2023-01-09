//прибавить к числу X единицу; умножить число X на 2; умножить число X на 3.
//Определите, какое наименьшее число операций необходимо для того, 
//чтобы получить из числа 1 заданное число N: 32718 -> 17; 5 -> 3.

#include <bits/stdc++.h>

using namespace std;
 
void calc(int curr, int count, int target, int & min_op){
   if (curr==target){
       if (min_op==-1)
          min_op=count;
       else
          min_op=min(count,min_op);
       return;
    }
   calc(curr+1,count+1,target,min_op);
   if ((curr*2)<target) calc(curr*2,count+1,target,min_op);
   if ((curr*3)<target) calc(curr*3,count+1,target,min_op);
}
 
int main() {
    int n,min_op=-1;
    cin >> n;
    calc(1,0,n,min_op);
    cout << min_op << endl;
    return 0;
}