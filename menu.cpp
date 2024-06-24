#include <iostream>
using namespace std;
int main(){
	int op;
	cout<<"cajero automatico"<<endl;
	cout<<"1. depositar "<<endl;
	cout<<"2. retirar"<<endl;
	cout<<"3. mostrar saldo"<<endl;
	cout<<"0. salir"<<endl;
	cout<<"elija una opcion: "; cin>> op;
	switch(op){
		case 0:
			cout<<"saliendo..."<<endl;
			system ("pause");
			break;
		}
		return 0;
	}
