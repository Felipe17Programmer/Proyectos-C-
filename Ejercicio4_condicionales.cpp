#include<iostream>

using namespace std;

int main(){
	int a;
	
	cout<<"Digite un numero: ";
	cin>>a;
	
	if(a>0){
		cout<<"El numero es positivo";
	}
	else if(a == 0){
		cout<<"El numero es neutro";
	}
	else{
		cout<<"El numero es negativo";
	}
	return 0;
}
