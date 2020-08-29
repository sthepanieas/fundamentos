//ejercicio7
//sthepanie

#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    float i,c,p,t;
    
   cout<<"bienvenidos a la calculadora de interes compuesto: " <<endl;
   
   cout<<"su capital es: " <<endl;
    cin>>c;
    
   cout<<"su periodo de años es: " <<endl;
    cin>>p;
    
    cout<<"con una taza de interes de: " <<endl;
    cin>>t;
    
    cout<<"el interes compuesto es:"<< pow((1+t),p)*c <<endl;


    return 0;
}
