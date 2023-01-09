// отсортировать по возрастанию четные колонны и по убыванию нечетные колонны
#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < m; j++){
        if(j % 2 == 0){
            for(int i = 0; i < n; i++){
                for(int k = i; k < n; k++){
                    if(a[k][j] < a[i][j]){
                        swap(a[k][j], a[i][j]);
                    } 
                }
            }
        } 
        else{
            for(int i = 0; i < n; i++){
                for(int k = i; k < n; k++){
                    if(a[k][j] > a[i][j]){
                        swap(a[k][j], a[i][j]);
                    }
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}