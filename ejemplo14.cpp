#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int op;
    //se muestran los opciones al usuarios
    cout<<"Elija una opcion de la Lista"<<endl;
    cout<<"1: Sumar notas"<<endl;
    cout<<"2: Multiplicar valores"<<endl;
    cout<<"3:Promediar precios"<<endl;
    // el usuario indica la opcion de su preferecia
    cin>>op;
    //se determina que opcion seleciono el usuario
    switch(op)
    {
              case 1:
                   cout<<"Se seleciono sumar (1)"<<endl;
                   break;
              case 2:
                   cout<<"se selecciono multiplicar (2)"<<endl;
                   break;
              case 3:
                   cout<<"se selecciono multiplicar (2)"<<endl;
              default:
                      cout<<"Opcion Invalida"<<endl;           
                       
    }
        system ("Pause");
        return 0;  
}
