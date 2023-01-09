// Last chance
#include <bits/stdc++.h>

using namespace std;

bool check(string s1, string s2){
   if (s1 == s2) return true;
   auto iter = mismatch(begin(s1), end(s1), cbegin(s2)).first; // Find the first difference in s1
   auto rter = mismatch(rbegin(s1), rend(s1), crbegin(s2)).first; // Find the last difference in s1
   swap(*iter, *rter); // Swap the two characters
   return s1 == s2;
}

int main(){
   string s, t;
   cin >> s >> t;
   string s1 = s, t1 = t;
   sort(s1.begin(), s1.end());
   sort(t1.begin(), t1.end());
   if(s1 != t1){
      cout << "No";
      return 0;
   }
   if(check) cout << "Yes";
   else cout << "No";
}
/*
You are given two strings. Check is it possible to make both
strings equal by performing only one string swap on exactly one of the strings.
nura aurn - Yes
nura auru - No
mismatch() сравнивает две последовательности и находит первую позицию, где 
элементы различны. Возвращается пара итераторов, каждый из которых указывает 
на эту позицию в соответствующей последовательности.
*/