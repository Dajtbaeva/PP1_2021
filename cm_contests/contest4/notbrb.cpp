// Please, not BRB
//The only fact about his number of points he know, that it equals to 
//the number of minimum operations which we have to perform on 
//1 to get the reminder of the n-th fibonacci number divided by 101
// Operations which we can perform are: multiply by 2, substract by 1.
#include<iostream>
#include<queue>
#include<map>
using namespace std;
int main(){
    int n;cin>>n;
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    map<int,int>used;
    used[1] = 0;
    for(int i=2;i<n+1;i++)
        fib[i] = (fib[i-1] + fib[i-2])%101;
    queue<int>q;
    cout<<fib[n]<<endl;
    q.push(1);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        if(cur==fib[n])
            break;
        if(!used[2*cur]&&cur<=fib[n]){
            used[2*cur] = used[cur] + 1;
            q.push(2*cur);
        }
        if(!used[cur-1]&&fib[n]<=cur-1){
            used[cur-1] = used[cur] + 1;
            q.push(cur-1);
        }
    }
    used[fib[n]] %= 31;
    cout<<used[fib[n]]<<endl;
    if(used[fib[n]]>15) cout<<"Gl hf";
    else cout<<"Povezlo, povezlo";
    return 0;
}