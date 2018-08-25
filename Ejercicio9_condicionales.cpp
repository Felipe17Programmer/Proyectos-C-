#include<iostream>

using namespace std;

int main(){
	int mes;
	
	cout<<"Digite un numero entre [1 -12]: ";
	cin>>mes;
	
	switch(mes){
		case 1:cout<<"1. Enero";break;
		case 2:cout<<"2. Febrero";break;
		case 3:cout<<"3. Marzo";break;
		case 4:cout<<"4. Abril";break;
		case 5:cout<<"5. Mayo";break;
		case 6:cout<<"6. Junio";break;
		case 7:cout<<"7. Julio";break;
		case 8:cout<<"8. Agosto";break;
		case 9:cout<<"9. Setiembre";break;
		case 10:cout<<"10. Octubre";break;
		case 11:cout<<"11. Noviembre";break;
		case 12:cout<<"12. Diciembre";break;
		default: cout<<"NUMERO INGRESADO FUERA DE RANGO";break;
			
	}
	
	return 0;
}
