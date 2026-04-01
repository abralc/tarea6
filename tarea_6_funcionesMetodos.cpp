#include <iostream>
using namespace std;
// Metodos y Funciones = ejecutan una porcion de codigo segun sea solicitada N cantidad de veces segun se manden a llamar
// metodo = no retorna un valor
// funcion = retorna un tipo de dato determinado

// funcion que sume dos valores
int suma(int num1, int num2){
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
}
int resta(int num1, int num2){
	int resultado = 0;
	resultado = num1-num2;
	return resultado;
}

main(){
	cout<<suma(10,20)<<endl;
	cout<<suma(50,70)<<endl;
	cout<<suma(30,70)<<endl;

	cout<<resta(10,20)<<endl;
	cout<<resta(50,70)<<endl;
	cout<<resta(30,70)<<endl;

	system("puase");
}
