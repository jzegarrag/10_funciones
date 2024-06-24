#include <iostream>
using namespace std;

void depositar(float);
void retirar(float);
void mostrarSaldo();

float saldo=0; //varible global

int main(){
	int op;
	float valor;
	do{
	cout<<"cajero automatico"<<endl;
	cout<<"1. depositar "<<endl;
	cout<<"2. retirar"<<endl;
	cout<<"3. mostrar saldo"<<endl;
	cout<<"0. salir"<<endl;
	cout<<"elija una opcion: "; cin>> op;
	switch(op){
		case 1:
			cout<<"ingrese el monto a depositar: "; cin>>valor;
			depositar(valor);
			system("pause");
			break;
		case 2:
			cout<<"ingrese el monto a retirar: "; cin>>valor;
			retirar(valor);
			system ("pause");
			break;
		case 3:
			cout<<"su saldo actual es "<<saldo<<"soles"<<endl;
			system ("pause");
			break;
		case 0:
			cout<<"saliendo..."<<endl;
			system ("pause");
			break;
			default:
				cout<<"opcion invalida"<<endl;
				system("pause");
				break;
			}
		}while (op!=0);
		return 0;
	
}
void depositar(float valor){
	saldo = saldo + valor;
}

void retirar(float valor){
	saldo = saldo-valor;
}

void mostrarSaldo(){
	cout<<"el saldo actual es: "<<saldo<<endl;
}