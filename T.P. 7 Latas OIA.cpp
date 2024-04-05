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
	charAct+=str[0];
	int inicio=0;
	int contador=1;
	for (int i=1;i
	<str.size();i++){
		if (str[i]==charAct[0]){
			contador++;
		}
		else {
			secuencias.push_back({contador,{inicio,i-1}});
			inicio=i;
			contador=0;
		}
	}
	sort (secuencias.rbegin(), secuencias.rend());
	cout<<getLong(str)<<endl;
	cout<<secuencias[0].largo<<endl;
	cout<<secuencias[1].largo<<endl;
	if (secuencias[0].hasta<secuencias[1].desde) cout<<secuencias[1].desde-secuencias[0].hasta;
	else cout<<secuencias[0].desde-secuencias[1].hasta;
	
}
// 1 3 
// 4 5 
//4 5
//1 3 

