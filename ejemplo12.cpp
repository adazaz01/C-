#include<iostream>
#include<ctype.h>
using namespace std;
int main ()
{
    char sexo;
    int edad;
    cout<<"Indique la edad de la persona"<<endl;
    cin>>edad,
    cout<<"Indique el sexo de lapersona (F o M)"<<endl,
    cin>>sexo;
    sexo= toupper (sexo);
    if(edad>=18)
                if(sexo=='F')
                cout<<"Mujer mayor de edad"<<endl;//una sola instruccion, no requieres {}
                else
                cout<<"Hombre mayor de edad"<<endl;
    else
                if (sexo=='F')
                cout<<"Mujer menor de edad"<<endl;
                else
                cout<<"Hombre menor de edad"<<endl;
    cout<<"\n Los valores suministrados son edad:"<<edad<<" y sexo:"<<sexo<<endl;
    system ("Pause");
      
    
}
