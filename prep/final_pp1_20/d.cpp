// New GPA

#include <bits/stdc++.h>

using namespace std;

bool comp(pair<pair<string, string>, double> &p1, pair<pair<string, string>, double> &p2){
    if(p1.second == p2.second) return p1.first.first > p2.first.first;
    if(p1.first.first == p2.first.first) return p1.first.second > p2.first.second;
    return p1.second < p2.second;
}

double convert(string g){
    if(g == "A+") return 4;
    else if(g == "A") return 3.75;
    else if(g == "B+") return 3.50;
    else if(g == "B") return 3;
    else if(g == "C+") return 2.50;
    else if(g == "C") return 2;
    else if(g == "D+") return 1.50;
    else if(g == "D") return 1;
    else if(g == "F") return 0;
}

double sum1 = 0, sum2 = 0;
double gpa(vector<pair<string, int> > w){
    for(int i = 0; i < w.size(); i++){
        sum1 += w[i].second * convert(w[i].first);
        sum2 += w[i].second;
    }
    return sum1 / sum2;
}


int main(){
    freopen("input.txt", "r", stdin);
    string name, surn, mark;
    int n, x, k;
    cin >> n;
    vector<pair<string, int> > v;
    vector<pair<pair<string, string>, double> > ans;

    while(n--){
        cin >> surn >> name >> x;
        while(x--){
            cin >> mark >> k;
            v.push_back(make_pair(mark, k));
        }
        ans.push_back(make_pair(make_pair(surn, name), gpa(v)));
        v.clear();
    }
    sort(ans.begin(), ans.end(), comp);
    vector<pair<pair<string, string>, double> > :: iterator it;
    for(it = ans.begin(); it != ans.end(); it++){
        cout << (*it).first.first << " " << (*it).first.second << " " << fixed << setprecision(3) << (*it).second << '\n';
    }
}
/*
5
Issenbayev Yernur 4 A 4 D+ 2 B 3 A+ 4
Yermekbayeva Diana 3 A+ 4 B+ 3 B 1
Kadyrov Asman 2 A+ 4 A+ 4
Stepanenko Ivan 3 C+ 3 F 1 A+ 5
Bissimbayev Arystan 3 A+ 4 A+ 5 D 1
-----------------------------------------------
Stepanenko Ivan 3.056
Issenbayev Yernur 3.308
Yermekbayeva Diana 3.688
Bissimbayev Arystan 3.700
Kadyrov Asman 4.000
*/