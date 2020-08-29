/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int h,m,s,x;
    
    cout<<"Introduzca la hora en formato de 24 horas: " <<endl;
    cin>>h;
    
    cout<<"Introduzca los minutos: " <<endl;
    cin>>m;
    
    cout<<"Introduzca los segundos: " <<endl;
    cin>>s;
    
    x=h-12;
    if (h>12) {
    
    cout<<"Esta es la hora: " <<endl;
    cout<<x;
    cout<< ":" <<m;
    cout<< ":" <<s;
    cout<< "PM";
    } else {
        cout<<"Esta es la hora: " <<endl;
        cout<<h;
        cout<<":" <<m;
        cout<<":"<<s;
        cout<<"AM"; }}
   