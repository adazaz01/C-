#include<iostream>
using namespace std;

int main()
{
    int i,cant,c=0,cc=0;
    float  nota,prom;
    char resp;

    prom=0;
    do
      {
       do
        {
           cout<<"Ingrese la nota"<<endl;
         cin>>nota;
         if ((nota<0)|| (nota>20))
         cout<<"ERROR. Debe colocar una cantidad mayor a cero y menor que 20"<<endl;
        }while ((nota<0)|| (nota>20));
       
               if (nota>=9.5)
                c++;
                else                
                cc++;
              
               
               prom=prom+nota;
     cout<<"¿Desea agregar otro alumno?"<<endl;
     cin>>resp;
    }while ((resp=='s')||(resp=='S'));
   cant=c+cc;
    prom=prom/cant;
    cout<<"Totales de alumnos aprobados"<<c<<endl;
    cout<<"Totales de alumnos no aprobados"<<cc<<endl;
    cout<<"El promedio de todo el grupo de alumno es:"<<prom<<endl;
    system ("Pause");
    return 0;
    
}
