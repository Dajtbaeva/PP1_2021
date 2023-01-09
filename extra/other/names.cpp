#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
// ernat - номер буквы в имени в аски коде и сумму ее
// darina 
// adil
// zhaks

using namespace std;

bool MySort(pair<string, pair<vector<int>, int> > &p1, 
    pair<string, pair<vector<int>, int> > &p2){
        if(p1.second.second == p2.second.second){
            return p1.first < p2.first;
        }
        return p1.second.second < p2.second.second;
}

int Sum(vector<int> v){
    int s = 0;
    for(int i=0; i<v.size(); i++){
        s += v[i];
    }
    return s;
}

int main(){
    freopen("input.txt", "r", stdin);
    
    int n;
    cin >> n;
    map<string, pair<vector<int>, int> > m;
    map<string, pair<vector<int>, int> > :: iterator mit;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            m[s].first.push_back(int(s[j]));
        }  
    }

    for(mit = m.begin(); mit != m.end(); mit++){
        (*mit).second.second = Sum((*mit).second.first);
    }

  
    vector<pair<string, pair<vector<int>, int> > > v(m.begin(), m.end());
    vector<pair<string, pair<vector<int>, int> > > :: iterator it;
    sort(v.begin(), v.end(), MySort);

    for(it = v.begin(); it != v.end(); it++){
        cout << (*it).first << ": ";
        for(int i=0; i<(*it).second.first.size(); i++){
            if(i == (*it).second.first.size()-1){
                cout << (*it).second.first[i] << "; ";
            }else{
                cout << (*it).second.first[i] << " ";
            }
        }
        cout << (*it).second.second << endl;
    }
    return 0;
}