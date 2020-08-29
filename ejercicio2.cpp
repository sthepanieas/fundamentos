//ejercicio2
//Sthepanie

#include <iostream>

using namespace std;

int main()
{
    	float d,r,pi,per,a,vol;
	
	cout <<"ingresar el valor del diametro: " <<endl;
	cin>>d;
	
	pi=3.1416;
	
	r=d/2;
	
	per=d*pi;
	
	a=r*r*pi;
	
	vol=(4/3)*r*r*r*pi;
	
	cout <<"el perimetro es: " <<per <<endl;
	cout<<"el area es: "<< a <<endl;
	cout<<"el volumen es: "<< vol <<endl;
    cout<<"Gracias por su preferencia: " <<endl;
    
 

    return 0;
}
