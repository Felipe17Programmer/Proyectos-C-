#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int numero,opcion,resultado=0;
	
	cout<<"\tMI MENU"<<endl;
	cout<<"\n1. El cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. SALIR"<<endl;
	cout<<"Opcion: ";cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"\nDigite un numero: ";cin>>numero;
			resultado= numero *numero*numero;
			cout<<"El resultado es: "<<resultado; 
			break;
		case 2:
			cout<<"\nDigite un numero: ";cin>>numero;
			if(numero%2==0){
				cout<<"Numero par"<<endl;
			}
			else{
				cout<<"Numero impar"<<endl;
			}
			break;
		case 3:break;
	}
	
	return 0;
}
