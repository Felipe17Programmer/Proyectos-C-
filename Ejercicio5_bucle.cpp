#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num,i;
	i=0;
	cout<<"Digite un numero: ";cin>>num;
	while(num != 0){
		if(num>0){
			i++;
			cout<<"Digite un numero: ";cin>>num;
		}
		else if(num==0){
			cout<<"\nLa cantidad de valores: "<<i<<endl;
		}
	}
	
	
	
	system("pause");
	return 0;
}
