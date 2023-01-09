//findNthNumber
#include<iostream>
using namespace std;
int N = 101;
// determine length of array of values
int length(int a[]) {
    for (int i = 0; i < N; ++i) {
        if (a[i] == 0) {
            return i - 1;
        }
    }

    return -1;
}
// return n-th missing number
int findNthNumber(int a[], int size, int n) {
    int j = 0, cnt = 0;
    for (int i = 0; i < N; ++i) {
        if (j > size || a[j] != i + 1) {
            cnt++;
            if (cnt == n) {
                return i + 1;
            }
        } else {
            j++;
        }
    }
}
int main() {
    int a[N] = {0};
    int n, i = 0;
    while (cin >> n) {
        a[i++] = n;
    }
    int l = length(a);
    cout << findNthNumber(a, l, a[l]) << endl;
}