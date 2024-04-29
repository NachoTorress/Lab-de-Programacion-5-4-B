#include <bits/stdc++.h>
using namespace std;
class CNumber{
	private:
		int a, b, c;
	public: 
		CNumber(int, int, int);
		int getMin();
		int getMax();
		float getPromedio();
		int getPares();
		int getImpares();
};
 CNumber::CNumber(int _a, int _b, int _c){
	a=_a, b=_b, c=_c;
}
int CNumber::getMax(){
	return max(max(a,b),c);
}
int CNumber::getMin(){
	return min(min(a,b),c);
}
float CNumber::getPromedio(){
	return (a+b+c)/3;
}
int CNumber::getPares(){
	int contador=a%2+b%2+c%2;
	return 3-contador;
}
int CNumber::getImpares(){
	return a%2+b%2+c%2;
}
int main(){
	CNumber tuple (1,2,3);
	cout<<"Maximo: "<<tuple.getMax()<<endl;
	cout<<"Minimo: "<<tuple.getMin()<<endl;
	cout<<"Promedio: "<<tuple.getPromedio()<<endl;
	cout<<"Cant Pares: "<<tuple.getPares()<<endl;
	cout<<"Cant impares: "<<tuple.getImpares()<<endl;
}
