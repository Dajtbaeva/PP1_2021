// hod konem
#include <iostream>
#include <queue>

using namespace std;
queue<pair<int, int>> b;
int a[8][8];


void step(int x,int y,int t){
    if(x>=0 && y>=0 && x<8 && y<8){
        if(a[x][y]==-1){
            a[x][y]=t+1;
            b.push(make_pair(x,y));
        }
    }

}
int main(){
 
    for(int i=0;i<8;i++){
        for(int j=0;i<8;j++){
            a[i][j]=-1;
        }
    }
    int x,y;
    cin>>x>>y;
    
    a[x][y]=0;
    b.push(make_pair(x,y));
   


    while(!b.empty()){
        pair<int, int> cur = b.front();
        b.pop();
        int cx = cur.first;
        int cy = cur.second;
        step(cx + 1, cy - 2, a[cx][cy]);
        step(cx - 1, cy - 2, a[cx][cy]);
        step(cx + 2, cy - 1, a[cx][cy]);
        step(cx - 2, cy - 1, a[cx][cy]);
        step(cx - 2, cy + 1, a[cx][cy]);
        step(cx + 2, cy + 1, a[cx][cy]);
        step(cx + 1, cy + 2, a[cx][cy]);
        step(cx - 1, cy + 2, a[cx][cy]);
    }
     for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }   

}