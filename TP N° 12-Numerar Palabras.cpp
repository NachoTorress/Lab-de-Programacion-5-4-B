#include <bits/stdc++.h>
using namespace std;
void mostrarPals(string frase){
	string aux=""; int contador=0;
	frase+=" ";
	for (int i=0;i<frase.size();i++){
		if (frase[i]!=' '){
			aux+=frase[i];
		}
		else {
			contador++;
			cout<<"P"<<contador<<" "<<aux<<endl;
			aux="";
		}
	}
}
int main(){
	string str;
	getline(cin,str);
	mostrarPals(str);
}
