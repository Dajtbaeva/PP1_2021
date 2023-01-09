// Dani's gpa
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    double sum = 0;
    double sumgpa = 0;
    map <string,double> m;
    while (n--) {
        int x;
        string s;
        cin >> s >> x;
        while (x--) {
            int y;
            string k;
            cin >> y >> k;
            sum += y;
            if (k == "A")sumgpa+=y*4.0;
            else if (k == "A-")sumgpa+=y*3.67;
            else if (k == "B+")sumgpa+=y*3.33;
            else if (k == "B")sumgpa+=y*3.0;
            else if (k == "B-")sumgpa+=y*2.67;
            else if (k == "C+")sumgpa+=y*2.33;
            else if (k == "C")sumgpa+=y*2.0;
            else if (k == "C-")sumgpa+=y*1.67;
            else if (k == "D+")sumgpa+=y*1.33;
            else if (k == "D")sumgpa+=y*1.0;
            else continue;
        }
        m[s] = sumgpa/sum;
        sumgpa = 0;
        sum = 0;
    }
    map <string,double> :: iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " : " << fixed << setprecision(2) <<  it->second << endl;
    }
    return 0;
}
/*
3
Azamat 4
5 A
6 C-
6 C
4 A-
Mikhail 5
4 B+
3 D
5 C+
6 C-
4 F
Ainur 4
5 B+
6 A
6 B-
3 C
*/