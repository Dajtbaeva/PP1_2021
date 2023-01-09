// Minesweeper
#include <iostream>
using namespace std;

int main(){

    int x, y;
    cin >> x >> y;
    x += 2; y += 2;  
    int ar[x][y]; // расширим пространство, чтобы избежать миллион условий и просто дадим ячейки мусору
    for (int i = 1; i < x - 1; i++){ // заполним нулями массив
        for (int j = 1; j < y - 1; j++){
            ar[i][j] = 0;
        }
    }
    int n; // колличество мин
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b; // их координаты
        ar[a + 1][b + 1] = -1; // там где мины, ячейка = -1
    }

    for (int i = 1; i < x - 1; i++){ 
        for (int j = 1; j < y - 1; j++){
            if (ar[i][j] == -1){ // если мы на координате мины
                if (ar[i][j + 1] != -1) ar[i][j + 1]++; // если соседние не мины, то +1
                if (ar[i][j - 1] != -1) ar[i][j - 1]++;
                if (ar[i + 1][j] != -1) ar[i + 1][j]++;
                if (ar[i - 1][j] != -1) ar[i - 1][j]++;
                if (ar[i + 1][j + 1] != -1) ar[i + 1][j + 1]++; 
                if (ar[i - 1][j - 1] != -1) ar[i - 1][j - 1]++;
                if (ar[i + 1][j - 1] != -1) ar[i + 1][j - 1]++;
                if (ar[i - 1][j + 1] != -1) ar[i - 1][j + 1]++;
            }
        }
    }

    for (int i = 1; i < x - 1; i++){
        for (int j = 1; j < y - 1; j++){
            if (ar[i][j] == -1) cout << '*'; 
            else if (ar[i][j] == 0) cout << '.';
            else cout << ar[i][j];
            cout << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}