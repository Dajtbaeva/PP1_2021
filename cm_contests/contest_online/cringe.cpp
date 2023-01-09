// Cringology, check prefixes

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    string c, s;
    cin >> n >> m;
    vector<string> cringes;
    while(n--){
        cin >> c;
        cringes.push_back(c);
    }
    int res = 0;
    while(m--){
        cin >> s;
        for(int i = 0; i < cringes.size(); i++){
            if(s.substr(0, cringes[i].size()) == cringes[i]) res += 1000;
            // if((*it).find(s) == string :: npos) cnt++;
        }
    }
    if(res > 0) cout << "Emae, balin\n" << res <<'\n';
    else cout << "Rakhmet, Yerla!Krasavchik!@erla1302\n";
}
/*
2 3
balin
yerla
emae
chetko
yerlan
------------------
Emae, balin
1000
*/
