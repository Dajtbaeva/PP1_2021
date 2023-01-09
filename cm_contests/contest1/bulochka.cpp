// Bulochka

#include <bits/stdc++.h>

using namespace std;

int main(){
    string t;
    cin >> t;

    for(int i = 0; i < t.size(); i++){
        t[i]= tolower(t[i]);
    }

    string v = "pacifywine";
   
    for(int i = 0; i < t.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(t[i] == v[j]){
                v.erase(j, 1);
                break;
            } 
        }
    }
    if(v.size() == 0) cout << "Bubu";
    else cout << "Wine by";
}
/*
Once upon a time there was a girl named Bulochka, she really loved to listen to 
"Pacify" song and drink "wine". You must help her to determine, may she chill or not. 
There is a word s, tell can you create both of words wine and pacify using the letters
from this words (you can't take one letter more than once).
*/    
