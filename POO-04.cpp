#include <bits/stdc++.h>
using namespace std;
class CEmpleado{
	private:
		string nombre;
		string apellido;
		int cantHijos;
		int sueldoBasico;
		int antiguedad;
		float jubilacion;
		float obraSocial;
		float INSSJP;
	public: 
		CEmpleado() {}
		CEmpleado(string, string, int, int, int);
		void setNombre(string);
		void setApellido(string);
		void setHijos(int);
		void setSueldo(int);
		void setAntiguedad(int);
		void setJubilacion();
		void setObra();
		void setINS();
		string getNombre();
		string getApellido();
		int getHijos();
		int getSueldo();
		int getAntiguedad();
		float getJubilacion();
		float getObra();
		float getINS();
		void mostrarDatos();
};
CEmpleado::CEmpleado (string _nombre, string _apellido, int _cantHijos, int _sueldoBasico, int _antiguedad){
	setNombre(_nombre);
	setApellido(_apellido);
	setHijos(_cantHijos);
	setSueldo(_sueldoBasico);
	setAntiguedad(_antiguedad);
	setJubilacion();
	setObra();
	setINS();
		
}
void CEmpleado::setNombre(string _nombre){
	nombre=_nombre;

}
void CEmpleado::setApellido(string _apellido){
	apellido=_apellido;
}
void CEmpleado::setHijos(int _hijos){
	cantHijos=_hijos;
}
void CEmpleado::setSueldo(int _sueldo){
	sueldoBasico=_sueldo;
}
void CEmpleado::setAntiguedad(int _antiguedad){
	antiguedad=_antiguedad;
}
void CEmpleado::setJubilacion(){
	jubilacion=sueldoBasico*0.11;
}
void CEmpleado::setObra(){
	obraSocial=sueldoBasico*0.03;
}
void CEmpleado::setINS(){
	INSSJP=sueldoBasico*0.03;
}
string CEmpleado::getNombre(){
	return nombre;
}
string CEmpleado::getApellido(){
	return apellido;
}
int CEmpleado::getHijos(){
	return cantHijos;
}
int CEmpleado::getSueldo(){
	return sueldoBasico;
}
int CEmpleado::getAntiguedad(){
	return antiguedad;
}
float CEmpleado::getJubilacion(){
	return jubilacion;
}
float CEmpleado::getObra(){
	return obraSocial;
}
float CEmpleado::getINS(){
	return INSSJP;
}
void CEmpleado::mostrarDatos(){
	cout<<getNombre()<<" "<<getApellido()<<"		"<<getJubilacion()<<"		"<<getObra()<<"		"<<getINS()<<endl;
}
void getDatos(vector<CEmpleado>&empleados){
	string nombre, apellido; int hijos,sueldo,antiguedad;
	cin>>nombre>>apellido>>hijos>>sueldo>>antiguedad;
	empleados.push_back(CEmpleado (nombre, apellido, hijos, sueldo, antiguedad));
}
int main(){
	int n;
	cout<<"Ingrese la cantidad de empleados a analizar"<<endl;
	cin>>n;
	cout<<"ingrese nombre, apellido, cantidad de hijos, sueldo, y antiguedad"<<endl;
	vector <CEmpleado> empleados;
	string nombre, apellido;
	int hijos, sueldo, antiguedad;
	for (int i=0;i<n;i++){
		getDatos(empleados);
	}
	cout<<"Nombre y Apellido	Jubilación	Obra Social		INSSJP"<<endl;
	for (int i=0;i<n;i++){
		CEmpleado aux=empleados[i];
		aux.mostrarDatos();
		
	}
}
