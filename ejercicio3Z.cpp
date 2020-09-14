// ejercicio3Z.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include"math.h"

using namespace std;
int main()
{
	int n=0,mul=1;
		cout<<"Ingrese el valor que desea para la multiplicacion: ";
		cin>>n;
	for(int i=1; i<=n; i++){
		if(i%2==0) 
		{
			mul=(mul*i);
		}
	}
	cout<<"La multiplicacion hasta: "<<n<< "es: "<<mul<<endl;

	system("pause");

	return 0;

}

