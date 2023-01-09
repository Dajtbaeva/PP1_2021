// Sanzhik VS Voronkov

#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, t, a, x;
    cin >> p >> t >> a;
    vector<int> v;

    int b[a];
    for(int i = 0; i < a; i++){
        cin >> b[i];
    }

    for(int i = 0; i < a; i++){
        int z = b[i] / t;
        if(z >= 10) v.push_back(10);
        else v.push_back(z);
    }

    int sumi = 0;
    for(int i = 0; i < v.size(); i++){
        sumi += v[i];
    }

    if(sumi >= p) cout << "Stipuha est' - mozhno poest'\n" << sumi;
    else cout << "Voronkov chert!\n" << sumi;
}
/*
Print "Stipuha est' - mozhno poest'" if the number of solved problems is higher 
or equal than the number p, otherwise print "Voronkov chert!". Also print the 
total amount of Sanzhik's solved problems. !!! DON'T FORGET, THAT THE MAX AMOUNT 
OF PROBLEMS ON EACH QUIZ IS 10 !!!
11 6 3
50
20
10
-----------------------------
Stipuha est' - mozhno poest'
12
*/