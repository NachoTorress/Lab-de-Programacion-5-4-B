#include <bits/stdc++.h>
#define largo first
#define desde second.first
#define hasta second.second
using namespace std;
int getLong(string str){
	return str.size()-1;
}
int main(){
	string str;
	cin>>str;
	vector <pair<int, pair<int, int>>> secuencias;
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
	cout<<getLong(str)<<endl;
	cout<<secuencias[0].largo<<endl;
	cout<<secuencias[1].largo<<endl;
	if (secuencias[0].hasta<secuencias[1].desde) cout<<secuencias[1].desde-secuencias[0].hasta;
	else cout<<secuencias[0].desde-secuencias[1].hasta;
}

