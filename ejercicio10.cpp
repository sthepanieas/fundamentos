/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

   int A1,A2,B1,B2,C1,C2,hr1,hr2,mr1,mr2,c1,c2,ct,B,rB,A,rA,rH,Mr;
   
   cout<<"algoritmo de resta de horas: " <<endl;
   
   cout<<"la segunda hora dede ser mayor a la primera: " <<endl;
   
   cout<<"ingrese la primera hora en el siguiente orden; horas-minutos-segundos:" <<endl; 
   cin>>A1; 
   cin>>B1; 
   cin>>C1;
   
   cout<<"ingrese la segunda hora en el siguiente orden; horas-minutos-segundos:"<<endl;
   cin>>A2; 
   cin>>B2; 
   cin>>C2;
   
   hr1=A1*3600;
   
   mr1=B1*60;
   
   c1=C1+mr1+hr1;
   
   hr2=A2*3600;
   
   mr2=B2*60;
   
   c2=C2+mr2+hr2;
   
   ct=c2-c1;
   
   B=ct/60;
   
   Mr=ct%60;
   
   A=B/60;
   
   rH=B%60;

    return 0;
}
