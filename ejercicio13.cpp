#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char letra;
    cout<<"Ingrese una letra vocal"<<endl;
    cin>>letra;
    letra=tolower(letra);
    switch(letra){
    case 'a':
         cout<<"Vocal ingresado: a"<<endl;
         break;
    case 'e':
         cout<<"Vocal ingresado: e"<<endl;
         break;
    case 'i':
         cout<<"Vocal ingresado: i"<<endl;
         break;
    case 'o':
         cout<<"Vocal ingresado: o"<<endl;
         break;
    case 'u':
         cout<<"Vocal ingresado: u"<<endl;
         break;
    default: cout<<"Debe Ingresar una vocal"<<endl;
    break;
    }
    system ("pause");
    return 0;
    
    
}
