#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    double b1,b2,h,r1,x,a,y,b,r2,a3,b3,x3,r3;
                              
    cout<<"Ejercicio 1 R1"<<endl;
    cout<<"Ingrese el valor de b1"<<endl;
    cin>>b1,
    cout<<"Ingrese el valor de b2"<<endl;
    cin>>b2;
    cout<<"Ingrese el valor de h"<<endl;
    cin>>h;
    r1=((b1+b2)/2)*h;
    cout<<"el resultado es:"<<r1<<endl;
    system ("Pause");

    
     cout<<"Ejercicio 2 R2"<<endl;
    cout<<"Ingrese el valor de x"<<endl;
    cin>>x,
    cout<<"Ingrese el valor de a"<<endl;
    cin>>a;
    cout<<"Ingrese el valor de y"<<endl;
    cin>>y;
    cout<<"Ingrese el valor de b"<<endl;
    cin>>b;
  r2= sqrt(pow(x-a,2)+ pow(y-b,2));
    cout<<"el resultado es:"<<r2<<endl;
     system ("Pause");
     
     cout<<"Ejercicio 3 R3"<<endl;
    cout<<"Ingrese el valor de a3"<<endl;
    cin>>a3,
    cout<<"Ingrese el valor de b3"<<endl;
    cin>>b3;
    cout<<"Ingrese el valor de x3"<<endl;
    cin>>x3;
       r3= asin(b3 * sqrt(pow(a3,2)-pow(x3,2))/sqrt(pow(a3,2)*pow(b3,2)+pow(x3,2)*pow(a3,2)-pow(b3,2)));
      cout<<"el resultado es:"<<r3<<endl;
     system ("Pause");  
    
    
}
