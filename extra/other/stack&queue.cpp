// student, sandwich
#include <bits/stdc++.h>

using namespace std;

int countStudents(vector<int> students, vector<int> sandwiches){
    queue<int> st;
    for(int i=0; i<students.size(); i++){
        st.push(students[i]);
    }
    stack<int> sn;
    for(int i = sandwiches.size()-1; i>=0; i--){
        sn.push(sandwiches[i]);
    }
    int cnt=0;
    while(!st.empty()){
        int student = st.front();
        int sandwich = sn.top();
        st.pop();
        if(student == sandwich){
            sn.pop();
            cnt = 0;
        }else{
            st.push(student);
            cnt++;
        }
        if(cnt >= st.size()){
            return st.size();
        }
    }
    return st.size();
}

int main(){
    vector<int> students = {1,1,1,0,0,1};
    vector<int> sandwiches = {1,0,0,0,1,1};
    cout << countStudents(students, sandwiches);
    return 0;
}