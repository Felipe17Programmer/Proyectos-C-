//Escribir un fragmento de programa donde se intercambien los valores de dos variables

#include<iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"Digite un numero para x: "; cin>>x;
	cout<<"Digite un numero para y: "; cin>>y;
	
	aux= x;
	x=y;
	y=aux;
	
	cout<<"\nEl nuevo valor para x es: "<<x<<endl;
	cout<<"El nuevo valor para y es: "<<y<<endl;
	
	
	
	return 0;
}
