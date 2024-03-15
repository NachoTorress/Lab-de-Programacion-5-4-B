#include <bits/stdc++.h>
using namespace std;
int contarLetraA(string str){
	int contador=0;
	for (auto i:str) if (i=='a' || i=='A') contador++;
	return contador;
}
int main(){
	string str; getline(cin, str);
	cout<<"La cantidad de letras A es: "<<contarLetraA(str);
	
}
