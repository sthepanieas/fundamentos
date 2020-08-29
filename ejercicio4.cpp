/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string nombre;
    int horas,precioporhora,sueldo,impuestos=0;

    cout<<"ingrese el nombre del tabajador: " <<endl;
    
    cin>>nombre;
    
    cout<<"ingrese las horas trabajadas: " <<endl;
    
    cin>>horas;
    
    cout<<"ingrese el precio por hora: " <<endl;
    
    cin>>precioporhora;
    
    sueldo=horas*precioporhora;
    
    if(sueldo>= 8272){
        impuestos=sueldo*0.13;
    }
    
    cout<<"su suelado bruto es de: " << endl <<sueldo - impuestos;


    return 0;
}
