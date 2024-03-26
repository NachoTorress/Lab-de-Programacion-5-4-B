#include <bits/stdc++.h>
using namespace std;
string invertirTexto(string str){
	reverse(str.begin(), str.end());
	return str;
}
string armarFrase(string frase){
	string res="";
	for (int i=0;i<frase.size();i++){
		while (frase[i]!= '(' && i<frase.size()){
			res+=frase[i];
			i++;
		}
		string aux; 
		i++;
		while (frase[i]!= ')' && i<frase.size()){
			aux+=frase[i];
			i++;
		}
		res+=invertirTexto(aux);		
	}
	return res;
}
int main(){
	string str; getline(cin, str);
	cout<<armarFrase(str);
}
