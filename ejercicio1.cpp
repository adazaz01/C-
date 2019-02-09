#include<iostream>
#include<conio.h>

using namespace std;
 int main ()
 {
     float n1, n2,naux;
     cout<<"Ingresar un numero, Por Favor"<<endl;
     cin>>n1;
     cout<<"Ingresar un numero, Por Favor"<<endl;
     cin>>n2;
     cout<<"Primer numero: "<<n1 <<" Segundo numero: "<<n2<<endl;
      
      naux=n1;
      n1=n2;
      n2=naux;
    cout<<"Ahora es, El primero:"<<n1<<"  El segundo:"<<n2;
    getch();
    return 0;
}
