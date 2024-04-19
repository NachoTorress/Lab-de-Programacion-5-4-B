#include <bits/stdc++.h>
using namespace std;
int main(){
	int ini, fin; cin>>ini>>fin;
	string str="hola", str2; 
	getline(cin,str);
	getline(cin,str2);
	reverse(str2.begin()+ini,str2.begin()+fin+1);
	cout<<str2;
}
