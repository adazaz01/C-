#include<iomanip>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c,x1,x2,r;
    cout<<setw (50)<<"Ecuaciones de 2do grado"<<endl;
    cout<<"Por favor ingrese el valor de a y luego presiona enter"<<endl;
    cin>>a;
    cout<<"Por favor ingrese el valor de b y luego presiona enter"<<endl;
    cin>>b;
    cout<<"Por favor ingrese el valor de c y luego presiona enter"<<endl;
    cin>>c;
    r=pow(b,2)-4*a*c;
    if (r>=0)//raices cuando b´2-4*a*c >=0
    {
             x1=(-b+sqrt(r))/(2*a);
             x2=(-b-sqrt(r))/(2*a);
             cout<<"El resultado de la ecuacion positivo es:"<<x1<<endl;
             cout<<"El resultado de la ecuacion negativo es:"<<x2<<endl;
    }
    else
    {
             x1=-b/(2*a);
             x2=sqrt(-r)/(2*a);
             cout<<"El resultado de la ecuacion positivo es:"<<x1<<","<<x2<<"i"<<endl;
             cout<<"El resultado de la ecuacion negativo es:"<<x1<<","<<-x2<<"i"<<endl;
             
    }
system ("Pause");

  return 0;

    
}
