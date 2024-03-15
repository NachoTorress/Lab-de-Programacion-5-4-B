#include <bits/stdc++.h>
using namespace std;
int esMayor(int a, int b, int c){
	return max(max(a,b), c);
}
int main(){
	int a,b,c; cin>>a>>b>>c;
	cout<<esMayor(a,b,c);
}
