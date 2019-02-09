#include <iostream>
#include <conio.h>
using namespace std;
int main ()
    {
         int a=5, b=10, c=20, r=2;
         cout<<"Antes de los operaciones: \n";
         cout<<"a="<<a <<"  b="<<b <<"  c="<<c <<"  r="<<r<<"\n\n"; 
         r=a+b;
         a=c%r;// se calcula c mod r, resto de 20/15
         c+=b;
         a=a*2; //a*=2;
         cout<<"Despues de las Operaciones \n";
         cout<<"a="<<a <<"  b="<<b <<"  c="<<c <<"  r="<<r;
         getch();
         return 0;
         
    }
