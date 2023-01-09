// Triforce

#include <iostream>
using namespace std;

int main(){

    int n; 
    cin >> n;
    char arr[n * 2 + 1][n * 4];

    for(int i = 1; i <= n * 2; i++){
        for(int j = 1; j <= n * 4 - 1; j++){
            // Весь массив
            arr[i][j] = ' ';
            // Низ
            if(i == n * 2 and j != n * 2) arr[i][j] = '*';
            // Левый край
            if(i + j == n * 2 + 1) arr[i][j] = '*';
            // Центр
            if(i == n and j >= i + 1 and j <= n * 3 - 1) arr[i][j] = '*';
            // Правый край
            if((i + j) % 2 == 1)
            if((i + j) / 2 == i + n - 1) arr[i][j] = '*';
            // Параллельный левому краю
            if(i + j == n * 4 + 1 and i >= n + 1) arr[i][j] = '*';
            // Параллельный правому краю
            if((i + j) % 2 == 1)
            if((i + j) / 2 == i - 1 and i >= n + 1) arr[i][j] = '*';
        }
    }

    for(int i = 1; i <= n * 2; i++){
        for(int j = 1; j <= n * 4 - 1; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}
// Meirkhan's code
#include<iostream>
using namespace std;
int main(){
    int n, s = 0;
    cin >> n;
    for(int i = 0; i < 2 * n; i++){
        for(int j = 0; j < 4 * n - 1; j++){ // (n * 2 - 1) * 2 + 1 = 4n - 1
            if(i == n - 1 && j >= n && j <= 3 * n - 2){
                cout << '*';
            }
            else if(i == 2 * n - 1 && (( 0 <= j && j < 2 * n - 1) || (2 * n <= j && j < 4 * n - 1))){
                cout << '*';
            }else if(i + j == 2 * n - 1){
                cout << '*';
            }else if(j >= 2 * n - 1 && i == j - 2 * n + 1){
                cout << '*';
            }else if(j <= 2 * n - 1 && i >= n && i == j + 1 ){
                cout << '*';
            }else if(j > 2 * n - 1 && i >= n && i + j == 4 * n - 1 ){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }cout << "\n";
    }
}
// Rakymzhan's code
#include <bits/stdc++.h>
using namespace std;
int a[400][400];
int mx, ry, ly;

void trian(int n, int x, int y){
  int cnt = 0;
  int x1 = x, x2 = x;
  int y1 = y, y2 = y; 
  while(cnt < n){
    a[x][y1] = 1;
    a[x][y2] = 1;
    x++; 
    y1++;
    y2--;
    cnt++;
  }
  mx=x; 
  ry=y1;
  ly=y2;
}

void poloska(int x, int y1, int y2){
  int y = y1;
  while(y <= y2){
    a[x][y] = 1;
    y++;
  }
}

int main(){
  int n;
  cin >> n;
  trian(n, 0, 2*n-1);
  poloska(mx-1, ly+1, ry-1);
  int mainx = mx;
  int righty = ry;
  
  trian(n, mx, ly);
  poloska(mx-1, ly+1, ry-1);
  
  trian(n, mainx, righty);
  poloska(mx-1, ly+1, ry-1);
  
  for(int i=0; i<2*n; i++){
    for(int j=0; j<4*n-1; j++){
      if(a[i][j] == 1){
        cout << '*';
      }
      else cout << ' ';
    }
    cout << '\n';
  }
  return 0;
}
/*
4
       *       
      * *      
     *   *
    *******
   *       *   
  * *     * *
 *   *   *   *
******* *******
*/
