#include <iostream>
using namespace std;
// Estructuras - struct (Una forma de agrupar varias variables relacionadas en un solo lugar).

/*
// Primera Parte
struct Estudiante{
	int codigo;
	string nombre;
	int nota;
};

main(){
	Estudiante estudiante;
	cout<<"Ingrese Codigo: ";
	cin>>estudiante.codigo;
	cin.ignore();
	cout<<"Ingrese Nombre Completo:";
	getline(cin,estudiante.nombre);
	cout<<"Ingrese Nota: ";
	cin>>estudiante.nota;
	cout<<endl;
	cout<<"Codigo: "<<estudiante.codigo<<endl;
	cout<<"Nombres Completo: "<<estudiante.nombre<<endl;
	cout<<"Nota: "<<estudiante.nota<<endl;
	cout<<endl;
	
	system("pause");
}
*/

/*
// Segunda Parte
struct Estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
};

main(){
	Estudiante estudiante;
	for(int i=0;i<4;i++){
		cout<<"_______________________"<<endl;
		cout<<"Ingrese Codigo: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Ingrese Nombre Completo:";
		getline(cin,estudiante.nombre[i]);
		cout<<"Ingrese Nota: ";
		cin>>estudiante.nota[i];
		cout<<endl;
	}
	
	for(int i=0;i<4;i++){
		cout<<"_______________________"<<endl;
		cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
		cout<<"Nombres Completo: "<<estudiante.nombre[i]<<endl;
		cout<<"Nota: "<<estudiante.nota[i]<<endl;
		cout<<endl;
	}
	
	system("pause");
}
*/

// Tercera Parte
struct Estudiante{
	int *codigo;
	string *nombre;
	int **nota;
};

main(){
	Estudiante estudiante;
	int fila=0,columna=0;
	cout<<"Cuantos Estudiantes desea ingresar: ";
	cin>>fila;
	cout<<"Cuantas notas por Estudiante desea Agregar: ";
	cin>>columna;
	
	estudiante.codigo = new int [fila];
	estudiante.nombre = new string [fila];
	estudiante.nota = new int *[fila];
	for (int i=0;i<fila;i++){
		estudiante.nota[i]=new int[columna];
	}
	cout<<"________________________ Ingreso de Notas ________________________"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo["<<i<<"]: ";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"]: ";
			cin>>*(*(estudiante.nota+i)+ii);
		}
		cout<<"_________________________"<<endl;
	}
	
	cout<<"_______Mostrar datos_______"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]: "<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo["<<i<<"]: "<<estudiante.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"]: "<<*(*(estudiante.nota+i)+ii)<<endl;
		}
		cout<<"_________________________"<<endl;
	}

	for (int i=0;i<fila;i++){
		delete[] estudiante.nota[i];
	}
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.nota;

	system("pause");
}
