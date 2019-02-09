#include<iostream>
using namespace std;

int main()
{
    int i, fin=10,s=0;
    for(i=0;i<fin;i++)
    s+=i*2;
    cout<<"\nel resultado del primer for es:"<<s << endl;
    for (i=fin ; i>0;i--)
    s+=i;
    cout<<"\nel resultado del segundo for es:"<<s<<endl;
    system ("Pause");
    return 0;
}
