/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   float a, b, c, i;
   
   cout<<"Claculadora de interes simple: " <<endl;
   
   cout <<"Ingrese el monto de dinero: " <<endl;
   
   cin>>a; 
   
   cout<<"Ingrese el tiempo en años: " <<endl;
   
   cin>>b; 
   
   cout<<"Ingrese la tasa de interes en un numero real: " <<endl;
   
   cin>>c;
   
   i=(b*(c/100))*a;
   
   cout<<"El interes ganado es: " << i <<  endl; 



    return 0;
}
