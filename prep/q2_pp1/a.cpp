#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    int min = 2021;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
   
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max - min + 1 - n << endl;
    return 0;
}