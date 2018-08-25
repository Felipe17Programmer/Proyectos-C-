//Ejercicio 2

#include<iostream>

using namespace std;

int main(){
	
	float precio,impuesto,impuesto2,resultado = 0;
	
	cout<<"Digite el precio del producto: ";cin>>precio;
	cout<<"Digite el valor del IVA o IGV sin simbolo % : "; cin>>impuesto;
	
	impuesto2 = precio * (impuesto / 100);
	resultado = precio + impuesto2;
	
	cout<<"\nEl precio del producto al aplicarle el IVA O IGV es: "<<resultado;
	
	
	
	return 0;
}
