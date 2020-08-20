/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int r, x;
    cout<<"Ingresar x: " ;
    cin>> x;
    
    if (x>=0) {
    r=x;  }
    else
   
    r=-x;
    
    cout << "el valor absoluto es: " << r;

    return 0;
}
