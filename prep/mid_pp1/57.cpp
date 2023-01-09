//Print even numbers in given range.
#include <iostream>
using namespace std;


void even(int n, int m){
    for(int i=n; i<=m; i++){
        if(i %2 == 0){
            cout << i << " ";
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    even(n, m);
    return 0;
}