#include <iostream> 
using namespace std; 

int main(){ 
    int n; 
    cin >> n; 
    int a[n]; 

    for (int i = 0; i < n; i++){ 
        cin >> a[i]; 
    } 
    int max=0; 
    int maxx=0; 

    for (int i = 0; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) { 
            if (a[i] <= a[j]) max += a[i]; 
            else break; 
        } 
        for (int j = i; j < n; j++) { 
            if (a[i] <= a[j]) max += a[i];
            else break;
        } 
        if (max >= maxx)  maxx = max; 
        max = 0; 
    } 
    cout << maxx << endl;
}