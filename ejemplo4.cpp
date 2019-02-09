#include<iostream>
#include <conio.h>
using namespace std;
int main()
    {
           // declaraciones
           const float pi=3.141592;
           int radio=5;
           float area;
           //calculos
           area=pi*radio*radio;
           //resultados
           cout<<"El area del circulo de radio "<<radio<<" es: "<<area;
           getch();
           return 0;
    }
