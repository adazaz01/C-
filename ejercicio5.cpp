#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    float precio,des,iva,total;
    cout<<"Colocar el precio del producto"<<endl;
    cin>>precio;
    des=precio*5/100;
    cout<<"Descuento:"<<des<<endl;
    iva=(precio-des)*0.12;
    cout<<"IVA:"<<iva<<endl;
    total=(precio-des)+iva;
    cout<<"El precio total del producto con IVA y Descuento:"<<total<<endl;
    getch();
    return 0;
    
}
