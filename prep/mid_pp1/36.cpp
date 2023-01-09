#include <iostream> // отсортировать по возрастанию четные строки, а нечетные строки отсортировать по убыванию
using namespace std;
int main (){
    //freopen("input.txt", "r", stdin);
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            // bubble sort:
            for(int j = 0; j<m; j++){
                for(int k = j; k<m; k++){
                    if(arr[i][k] < arr[i][j]){
                        swap(arr[i][k], arr[i][j]);
                    }
                }
            }
        }else{ //нечетные по убыванию
            // sort max-to-min
            for(int j = 0; j<m; j++){
                for(int k = j; k<m; k++){
                    if(arr[i][k] > arr[i][j]){
                        swap(arr[i][k], arr[i][j]);
                    }
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}    