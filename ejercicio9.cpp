//ejercicio9
//sthepanie

#include <iostream>

using namespace std;

int main()
{
     int horas=0,min=0,seg= 0;

    
    cout<<"ingrese segundos: " <<endl;
    cin>>seg;
   
    
    
 
   if(seg>= 60){
       
        min=(seg/60);
        if(min>=60){
            min=(seg/60)- 60;
            
        }
      
    }
    if(seg>=3600){
        
        horas=(seg/3600);
       
    }
   
    seg=(seg%60);

    
cout<<horas<<" hora(s) "<< min<<" minuto(s) "<<seg<<" segundo(s)";

    return 0;
}
