#include <bits/stdc++.h>
using namespace std;
bool esMultiplode3(int n){
	return n%3==0;
}
int main(){
	int n; cin>>n; 
	if (esMultiplode3(n)) cout<< "MULTIPLO";
	else cout<<"NO ES MULTIPLO";
}
