#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int s,seg,min,hora,dia;
    
    cout<<"Ingrese una cantidad de segundos"<<endl;
    cin>>s;
    dia=s/86400;// un dia tiene 86400 segundos
    seg=s%86400;// el resto son segundo que no fueron alcanzaron para completar un horas mas
    hora=seg/3600;
    seg=seg%3600;
    min=seg/60;
    seg=seg%60;
    cout<<"Equivale a dia:" <<dia<<" hora:"<<hora<<" minutos:"<<min<<" segundos:"<<seg<<endl;
    getch();
    return 0;
}
