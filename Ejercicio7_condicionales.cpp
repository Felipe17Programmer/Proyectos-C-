#include<iostream>

using namespace std;

int main(){
	int a,b,c,d;
	
	cout<<"Digite tres numeros: ";
	cin>>a>>b>>c;
	
	cout<<"\nDigite otro numero: ";
	cin>>d;
	
	if(d == a){
		cout<<"El ultimo numero coincide con el primero";
	}
	else if(d==b){
		cout<<"El ultimo numero coincide con el segundo";
	}
	else if(d==c){
		cout<<"El ultimo numero coincide con el tercero";
	}
	else{
		cout<<"El ultimo numero no coincide";
	}
	
	
	return 0;
}
