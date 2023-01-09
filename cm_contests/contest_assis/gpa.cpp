//GPA, not correct

#include <bits/stdc++.h>

using namespace std;

double convert(string g){
    if(g == "A") return 4;
    else if(g == "A-") return 3.67;
    else if(g == "B+") return 3.33;
    else if(g == "B") return 3;
    else if(g == "B-") return 2.67;
    else if(g == "C+") return 2.33;
    else if(g == "C") return 2;
    else if(g == "C-") return 1.67;
    else if(g == "D+") return 1.33;
    else if(g == "D") return 1;
    else if(g == "F") return 0;
}

double sum1 = 0, sum2 = 0;
double gpa(vector<pair<int, string> > w){
    for(int i = 0; i < w.size(); i++){
        sum1 += w[i].first * convert(w[i].second);
        sum2 += w[i].first;
    }
    return sum1 / sum2;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n, m, c;
    cin >> n;
    string s, t;
    vector<pair<int, string> > v;
    map<string, double> mm;
    
    for(int i = 0; i < n; i++){
        cin >> s >> m;
        for(int j = 0; j < m; j++){
            cin >> c >> t;
            v.push_back(make_pair(c, t));  
        } mm.insert(make_pair(s, gpa(v)));
        v.clear();
    }

    map<string, double> :: iterator it;
    for(it = mm.begin(); it != mm.end(); it++){
        cout << (*it).first << " : " << fixed << setprecision(2) << (*it).second << '\n';
    }
}
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