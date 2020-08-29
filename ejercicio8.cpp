//ejercicio8
//sthepanie

#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e,f,x,z ;
	cout<< "sistemas de ecuaciones de la forma: " <<endl; 
	
	cout<<"ax+bz=c" <<endl;
	cout<< "dx+fz=e" <<endl;
	
	cout<< " digita el valor de a: " <<endl;
	cin>> a;
	cout<< " digita el valor de b: " <<endl;
	cin >> b;
	cout<< " digita el valor de c: " <<endl;
	cin >> c;
	cout<< " digita el valor de d: " <<endl;
	cin>> d;
	cout<< " digita el valor de e: " <<endl;
	cin >> e;
	cout<< " digita el valor de f: " <<endl;
	cin >> f;
	
	x= (-b*e+f*c)/(-b*d+a*f);
	z= (-c*d+a*e)/(-b*d+a*f);
	
	cout<< "la solucion del sistema de ecuacion es: " << endl;
	cout<< "x es igual a: "<< endl;
	
	cout<<x <<endl;
	
	cout<< "z es igual a: " <<endl;
	cout<<z <<endl;
    
    return 0;
}
