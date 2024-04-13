#include <bits/stdc++.h>
using namespace std;
void mostrarClave(string cifrado){
	int it=cifrado.find('*'), it2;
	for (int i=0;i<4;i++){
		 it2=cifrado.find('*', it+1);
		cout<<it2-it-1<<endl;
		it=it2;
	}
}
int main(){
	string cifrado; cin>>cifrado;
	mostrarClave(cifrado);
	}
