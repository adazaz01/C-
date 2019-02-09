#include <iostream>
#include <conio.h>
using namespace std;
int main()
    {
     int n1; 
     float n2;
     cout<<"Por favor, suministre un valor entero"<<endl;
     cin>>n1;
     cout<<"Suministre ahora un valor real (recuerde usar. para el parte decimal)"<<endl;
     cin>>n2;
     cout<<"2+"<<n1<<"="<<2+n1<<endl;//imprime un entero
     cout<<n2<<"/2="<<n2/2<<endl;//imprime un flotante (real)
     cout<<"Luego de convertir a entero el resultado,";
     cout<<"PI+"<<n1<<"="<<(int)(3.1415592+n1)<<endl;// imprime une entero;
     getch();
     return 0;
                                                    
    }
