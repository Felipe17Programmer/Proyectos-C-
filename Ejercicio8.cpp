#include<iostream>

using namespace std;

int main(){
	float alumno1,alumno2,alumno3,alumno4,promedio = 0;
	
	cout<<"Digite la nota del alumno 1: "; cin>>alumno1;
	cout<<"Digite la nota del alumno 2: "; cin>>alumno2;
	cout<<"Digite la nota del alumno 3: "; cin>>alumno3;
	cout<<"Digite la nota del alumno 4: "; cin>>alumno4;
	
	promedio=(alumno1 + alumno2 + alumno3 + alumno4)/4;
	
	cout<<"\nEl promedio final entre la nota de los 4 alumnos es: "<<promedio<<endl;
	
	
	return 0;
}
