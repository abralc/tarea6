#include <iostream>
using namespace std;
// Metodos y Funciones = ejecutan una porcion de codigo segun sea solicitada N cantidad de veces segun se manden a llamar
// metodo = no retorna un valor
// funcion = retorna un tipo de dato determinado

/*
//Segunda Parte
// funcion que sume dos valores
int resta(int num1, int num2){
	int resultado = 0;
	resultado = num1-num2;
	return resultado;
}
// Metodos y envio de parametros por valor
void suma(int num1, int num2){
	int resultado = 0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
	cout<<resultado<<endl;
}

main(){
	int a=10, b=20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;


	system("puase");
}
*/

//Tercera Parte
int resta(int num1, int num2);
void suma(int &num1, int &num2);
main(){
	int a=10, b=20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;


	system("puase");
}
// funcion que sume dos valores
int resta(int num1, int num2){
	int resultado = 0;
	resultado = num1-num2;
	return resultado;
}
// Metodos y envio de parametros por valor
void suma(int &num1, int &num2){
	int resultado = 0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
	cout<<resultado<<endl;
}
