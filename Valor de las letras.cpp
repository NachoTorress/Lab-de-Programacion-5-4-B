#include <bits/stdc++.h>
using namespace std; 
int getPuntaje (char ch){
	if (ch=='a' || ch=='e') return 1;
	if (ch=='o' || ch=='s') return 2;
	if (ch=='d' || ch=='i' || ch=='n' || ch=='r') return 3;
	if (ch=='c' || ch=='l'|| ch=='t' ||ch=='u') return 4;
	if (ch=='m' || ch=='p') return 5;
	if (ch=='b' || ch=='f'|| ch=='g' || ch=='h'|| ch=='j' || ch=='q' ||ch=='v' ||ch=='x' ||ch=='y' || ch=='z') return 6;
	if (ch=='k' || ch=='w') return 7;
	return 0;
}
int main(){
	string str; getline(cin,str);
	int total=0;
	for (auto i:str) total+=getPuntaje(i);
	cout<<total;
}
