#include <bits/stdc++.h>

using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int x = n;
    while(x--){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j - i == x){
                    cout << arr[i][j] << " ";
                }
            }
        }
        cout << endl;
    }

    x++; // x стал равен 0, потому что был -1 на строчке 19

    while(x < n-1){
        x++;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i - j == x){
                    cout << arr[i][j] << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
/* for (int i = 0; i < a; i++){   
        int z;
        z = a;
        for (int j = 0; j < a; j++)
        {
            cout << ar[a - z][a - 1] << " ";
            
        }
        cout << endl;
    }*/