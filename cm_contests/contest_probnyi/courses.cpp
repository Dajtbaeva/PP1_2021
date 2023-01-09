// Queue to courses
// The main rule was like: student
// can join the course only if he/she took more points for midterm than the student who stands next in the
// queue. Otherwise the former student goes to the end of the queue.
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    int n;
    int k;
    cin >> n >> k;

    string s, name;
    float p;
    pair<string, int> p1, p2, p3;
    queue<pair<string, int> > q;
    
    for(int i = 0; i < n; i++){
        cin >> s >> p;
        p1 = make_pair(s, p);
        q.push(make_pair(s, p));
    }

    queue<string> res;
    while(!q.empty()){
        p2 = q.front(); q.pop();
        p3 = q.front();
        if(p2.second > p3.second){
            res.push(p2.first);
        }else q.push(p2);
        if(res.size() == k){
            while(res.empty() <= k){
                cout << res.front() << endl;
                res.pop();
            }
        }
    }

}
/*
8 2
Temirlan 0
Adil 18.0
Arman 12.0
Kanat 25.0
Konstantin 34.0
Noob 10.0
Bagdat 12.0
Daulet 15.0
-------------
Adil
Konstantin
*/