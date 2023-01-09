//Simple work with multiple sets
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n, k, a;
    cin >> n;
    string s;
    multiset<int> ms;
    multiset<int> :: iterator it;

    for(int i = 0; i < n; i++){
        cin >> k;
        for(int j = 0; j < k; j++){
            cin >> s;
            if(s == "Print"){
                for(it = ms.begin(); it != ms.end(); it++){
                    cout << (*it) << " ";
                } cout << endl;
            }else if(s == "Insert"){
                cin >> a;
                ms.insert(a);
            }else if(s == "Delete"){
                cin >> a;
                if(ms.find(a) == ms.end()) cout << "Doesn't exist" << endl;
                else{
                    ms.erase(a);
                    cout << "Deleted" << endl;
                }
            } 
        } ms.clear();
        cout << endl;
    }


}

/*
2
6
Insert 1
Insert 2
Insert 3
Print
Delete 2
Print
5
Delete 3
Insert 1
Insert 2
Delete 2
Print


1 2 3
Deleted
1 3
Doesn’t exist
Deleted
1
*/