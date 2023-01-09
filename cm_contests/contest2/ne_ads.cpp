// NE ADS, no algoritmy znat' nado

#include <bits/stdc++.h>

using namespace std;

void big(int &a){
    a += a;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n, x, z, p1, p2, h, i1, i2;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    cout << "initial ";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    } cout << endl;

   
    string s;
    int k;
    cin >> k;
    for(int i = 1; i <= k; i++){
        cin >> s;
        if(s == "sort"){
            sort(v.begin(), v.end());
            cout << i << ") ";
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n';
        }else if(s == "reverse"){
            cout << i << ") ";
            reverse(v.begin(), v.end());
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n';
        }else if(s == "find_max"){
            cout << i << ") ";
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n' << "max - " << *max_element(v.begin(), v.end()) << '\n';
        }else if(s == "find_min"){
            cout << i << ") ";
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n' << "min - " << *min_element(v.begin(), v.end()) << '\n';
        }else if(s == "sum"){
            cout << i << ") ";
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n' << "sum - " << accumulate(v.begin(), v.end(), 0) << '\n';
        }else if(s == "kick_one"){
            cin >> z;
            cout << i << ") ";
            v.erase(v.begin() + z);
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n';
        }else if(s == "kick_part"){
            cin >> p1 >> p2;
            cout << i << ") ";
            v.erase(v.begin() + p1, v.begin() + p2);
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n';
        }else if(s == "how_many"){
            cin >> h;
            cout << i << ") ";
            int mycount = count(v.begin(), v.end(), h);
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n' << mycount << " times\n";
        }else if(s == "make_bigger"){
            cout << i << ") ";
            for_each(v.begin(), v.end(), big);
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n';
        }else if(s == "invite_one"){
            cin >> i1 >> i2;
            cout << i << ") ";
            v.insert(v.begin() + i2, i1);
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            } cout << '\n';
        }else if(s == "kick_all"){
            v.clear();
            cout << i << ") ok\n";
        } 
    }
}

/*
10
1 2 3 4 5 6 7 8 9 10
5
reverse
sort
kick_one 1
kick_part 1 4
make_bigger



initial 1 2 3 4 5 6 7 8 9 10 
1) 10 9 8 7 6 5 4 3 2 1 
2) 1 2 3 4 5 6 7 8 9 10 
3) 1 3 4 5 6 7 8 9 10 
4) 1 6 7 8 9 10 
5) 2 12 14 16 18 20 
*/