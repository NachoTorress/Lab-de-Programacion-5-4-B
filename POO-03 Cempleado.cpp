#include <bits/stdc++.h>
using namespace std;

class CEmpleado{
	private:
		string nombre;
		int ingreso;
		int salario;
		string direccion;
	public:
		CEmpleado(string, int, int, string);
		string setNombre(string);
		int setIngreso(int);
		int setSalario(int);
		string setDireccion(string);
		string getNombre();
		int getIngreso();
		int getSalario();
		string getDireccion();
		int getAntiguedad(int);
		string viveEnWall(string);
};
CEmpleado::CEmpleado(string nombre,int ingreso,int salario,string direccion){
	setNombre(nombre);
	setIngreso(ingreso);
	setSalario(salario);
	setDireccion(direccion);
}
string CEmpleado::setNombre(string _nombre){
	nombre=_nombre;
	return nombre;
}
int CEmpleado::setIngreso(int _ingreso){
	ingreso=_ingreso;
	return ingreso;
}
int CEmpleado::setSalario(int _salario){
	salario=_salario;
	return salario;
}
string CEmpleado::setDireccion(string _direccion){
	direccion=_direccion;
	return direccion;
}
string CEmpleado::getNombre(){
	return nombre;
}
int CEmpleado::getIngreso(){
	return ingreso;
}
int CEmpleado::getSalario(){
	return salario;
}
string CEmpleado::getDireccion(){
	return direccion;
}
int CEmpleado::getAntiguedad(int _ingreso){
	return 2024-_ingreso;
}
string CEmpleado::	viveEnWall(string _direccion){
	string res="NO";
	if (_direccion.find("WallStreet")!=string::npos) res="SI";
	return res;
}
int main(){
	int n;
	cout<<"Ingrese la cantidad de empleados a analizar: "<<endl;
	cin>>n;
	cout<<"Ingrese los datos en el siguiente Orden: Nombre-Anio de Ingreso-Salario-Direccion"<<endl;
	vector <CEmpleado> empleados;
	for (int i=0;i<n;i++){
		string nombre, direccion; int ingreso, salario;
		cin>>nombre>>ingreso>>salario>>direccion;
		empleados.push_back( CEmpleado(nombre,ingreso,salario,direccion));
		//i=CEmpleado(nombre,ingreso,salario,direccion);
	}
	cout<<"NOMBRE	"<<"Anio de Ingreso		"<<"Direccion	"<<"Antiguedad		"<<"Vive en WallStreet"<<endl;
	cout<<endl;
	for (int i=0;i<n;i++){
		CEmpleado aux=empleados[i];
		cout<<aux.getNombre()<<"	"<<aux.getIngreso()<<"			"<<aux.getDireccion()<<"		"<<aux.getAntiguedad(aux.getIngreso())<<"			"<<aux.viveEnWall(aux.getDireccion())<<endl;
		
	}
}
/*
Robert 2014 5000 WallStreet
Nacho 2007 3000 Alem
Vicky 2002 6000 Jbjusto
Abdala 1987 10000 WallStreet
*/
