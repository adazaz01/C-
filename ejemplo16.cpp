#include<iostream>
using namespace std;

int main()
{
    int i,cant;
    float  nota,prom;
    do
    {
    cout<<"Ingrese la cantidad de notas a promediar"<<endl;
    cin>>cant;
               if (cant<=0)
               cout<<"ERROR. Debe colocar una cantidad mayor a cero"<<endl;
    }while(cant<=0);
    prom=0;
    for(i=1;i<=cant;i++)
    {
       do
        {
         cout<<"Ingrese la nota"<<i<<":"<<endl;
         cin>>nota;
         if ((nota<0)|| (nota>20))
         cout<<"ERROR. Debe colocar una cantidad mayor a cero y menor que 20"<<endl;
        }while ((nota<0)|| (nota>20));
    prom=prom+nota;
    }
    prom=prom/cant;
    cout<<"El promedio es:"<<prom<<endl;
    system ("Pause");
    return 0;
    
}
