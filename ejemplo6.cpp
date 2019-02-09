#include <iostream>
#include<conio.h>
using namespace std;

int main ()
    {
         /* uso de operaciones relacionales y logicos*/
         int a=2, b=5, c=4;
         char letra1='e' , letra2='f';
         cout<<"Operadores sobre variables numericas \n";
         cout<<"Valores, a: "<<a <<"b: "<<b <<" y c: "<<c <<"\n\n";
         cout<<"comparando por desigualdad a y b, resultado:  " <<(a==b)<<"(0 es falso)\n\n";
         a+=2;
         cout<<"Operadores sobre variables caracter\n";
         cout<<"Valores, letra1: "<<letra1<<" y letra2: "<<letra2<<"\n\n"; // este para saber que se puede trabajar en el codigo ascii
         letra1++;
         cout<<"Comparando ambas letras resultado: " <<(letra1==letra2)<<"(1 es verdadero)\n\n";
         getch();
         return 0;
         
    }
