// Vigenere cipher

#include <bits/stdc++.h>

using namespace std;
 
string encrypt(string m, string key){
	string ciphertext = "";
	for(int i = 0;i < m.size();i++){
		ciphertext += ((m[i] - 'A') + (key[i % key.size()] - 'A')) % 26;
		ciphertext[i] = ciphertext[i] + 'A';
	}
	return ciphertext;
}
string decrypt(string m, string key){
	string plaintext = "";
	for(int i = 0;i < m.size();i++){
		plaintext += ((m[i] - 'A') - (key[i % key.size()] - 'A')) % 26;
		if(plaintext[i] < 0) plaintext[i] += 26;
		plaintext[i] = plaintext[i] + 'A';
	}
	return plaintext;
}
 
int main(){
	string Key = "SET";
	string message = "TOPSECRET";
	string cipher = encrypt(message, Key);
	cout << cipher << endl;
	string plaintext = decrypt(cipher, Key);
	cout << plaintext << endl;
	return 0;
}
