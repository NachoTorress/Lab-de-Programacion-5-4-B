#include <bits/stdc++.h>
using namespace std;
string getName(string str){
	string res="";
	for (int i=0;i<str.size();i++){
	
		char ch=str[i];
		res+=ch;
		if (ch !='n' &&  ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!= 'U' && ch!=' '){
		if (i+1<str.size()){
			char c=str[i+1];
			if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u'&& c!='A' && c!='E' && c!='I' && c!='O'&& c!= 'U' && c!=' ') {				
			res+= "u";
			//i++;
			}
		}
		}
	}		
	char 	ch=str[str.size()-1];
		if (ch !='n' &&  ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!= 'U') res+="u";
return res;
	}
string japonizar (string str){
	string aux="";
		string res; 		
		for (int j=0;j<str.size();j++){
			if (str[j]!=' '){
				aux+=str[j];
			}
			else {
				res+=getName(aux)+" ";
				aux="";
			}
		}
	res+=" "+getName(aux);
	return "Konnichi wa, "+res+"-san";	
}


int main(){
	int n; cin>>n;
	cin.ignore();
	for (int i=0;i<n;i++){
		string str;
		getline(cin, str);
	cout<<japonizar(str)<<endl;

}}
