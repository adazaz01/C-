#include <iostream>
#include <conio.h>
using namespace std;
int variable_global=10;
int main()
    {
          int variable_local=20;
          cout<<"El valor de la variable global es: "<<variable_global <<"\n";
          cout<<"El valor de la variable local es: "<<variable_local <<"\n";
          variable_local=variable_global;
          cout<<"Ahora el valor de la variable local es:" << variable_local <<"\n";
          cout<<"\n\n";
          getch();
          return 0;
    }
