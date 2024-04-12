#include <bits/stdc++.h>
#define largo first
#define desde second.first
#define hasta second.second
using namespace std;
int getLong(string str){
	return str.size()-1;
}
vector <pair<int, pair<int, int>>> secuencias;
void getSecuencias(string str){
	string charAct="";
	charAct+='G';
	int inicio=0;
	int contador=1;
	for (int i=1;i<str.size();i++){
		while (str[i]=='G' && i<str.size()){
            contador++;
            i++;
	}
    secuencias.push_back({contador,{inicio, i-1}});
    contador=0;
    inicio=i;
}
	sort (secuencias.rbegin(), secuencias.rend());
	
}
int getPrimeraSecuencia(){
	return secuencias[0].largo;
}
int getSegundaSecuencia(){
	return secuencias[1].largo;
}
int getDistancia(){
	int dist;
	if (secuencias[0].hasta<secuencias[1].desde) dist=secuencias[1].desde-secuencias[0].hasta;
	else dist=secuencias[0].desde-secuencias[1].hasta;
	return dist;
}
int main(){
	string str;
	cin>>str;
	getSecuencias(str);

	cout<<getLong(str)<<endl;
	cout<<getPrimeraSecuencia()<<endl;
	cout<<getSegundaSecuencia()<<endl;
	cout<<getDistancia()<<endl;
}

