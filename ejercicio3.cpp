#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"Ingrese el Primer valor"<<endl;
    cin>>a;
    cout<<"Ingrese el Segundo valor"<<endl;
    cin>>b;
    cout<<"Ingrese el Tercero valor"<<endl;
    cin>>c;
    (a>b)&&(a>c)? cout<<"El primer numero es mayor:"<<a<<endl : (b>a)&& (b>c)? cout<<"El Segundo numero es mayor:"<<b<<endl : (c>a)&& (c>b) ? cout<<"El Tercero es mayor:"<<c<<endl:cout<<"Debe ingresar 3 valor diferentes";
    //siempre tiene que tener ambas condiciones.
    
    getch();
    return 0;
}
