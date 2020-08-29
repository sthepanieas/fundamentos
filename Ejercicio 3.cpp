/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    float e1,e2,e3,ne,ef,pf,nf;
	cout<<"Ingrese las tres notas de sus examenes respectivamente: " <<endl;
	cout<<"Nota 1: " ;
	cin>> e1;
	cout<<"nota 2: " <<endl;
	cin>>e2;
	cout<<"Nota 3: " <<endl;
	cin>>e3;
	ne=(e1+e2+e3)/3;
	cout<<"Ingrese la nota del examen final: " <<endl;
	cin>>ef;
	cout<<"Ingrese la nota del proyecto final: " <<endl;
	cin>>pf;
	nf=(ne*40/100)+(ef*40/100)+(pf*20/100);
	cout<<"Su nota final es: " <<nf<<endl;
    

    return 0;
}
