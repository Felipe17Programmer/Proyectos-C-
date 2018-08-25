#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Digite tres numeros: ";
	cin>>a>>b>>c;
	
	if(a>b){
		if(a>c){
			cout<<"El numero mayor es: "<<a<<endl;
		}
		else{
			cout<<"El numero mayor es: "<<c<<endl;
		}
	}
	else if(b>a){
		if(b>c){
			cout<<"El numero mayor es: "<<b<<endl;
		}
		else{
			cout<<"El numero mayor es: "<<c<<endl;
		}	
	}
	else{
		cout<<"El numero mayor es: "<<c<<endl;
	}
	
	return 0;
}
