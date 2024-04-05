#include <bits/stdc++.h>
using namespace std;
int main(){
	string str; getline(cin, str);
	string charAct="";
	charAct+=str[0];
	vector <pair<string, int>> letras;
	int contador=1;
	for (int i=1;i<str.size();i++){
		if (str[i]!=charAct[0]){
			letras.push_back({charAct,contador});
			contador=1;
			charAct[0]=str[i];
		}
	else contador++;
	}
	letras.push_back({charAct, contador});
	for (int i=0;i<letras.size();i++){
		cout<<letras[i].first;
		if (letras[i].second>1) cout<<"{"<<letras[i].second<<"}";
	}
}
