#include <iostream>

using namespace std;
//funcion con parametros por valor
int proceso(int a, int b,int r){
    int y=a*b*b+r;
    return y;
    //return  m*x*x+c;
}
//function sin prototipo
void salida(int mostra){
    cout<<"el resultado del calculo es "<<mostra;
}
//funcion
//parametros por referencia *,&,[]
void entrada2(int *a,int *b,int *c){
    cout<<"*****************************\n";
    cout<<"**Introduzca x,m y c*********\n";
    cout<<"*****************************\n";
    if(cin>>*a>>*b>>*c)
    {
         cout<<"datos leidos correctamente ";
    }
    else
        cout<<"datos erroneos";
}
//prototipo de funcion
//parametros por referencia *,&,[]
void entrada(int &,int &,int &);
//int Global=1;
int main()
{
    cout<<"realizar el calculo de  y=mx*x+c";
    int m,x,c;
    //entrada(m,x,c);
    entrada2(&m,&x,&c);
    int y=proceso(m,x,c);
    salida(y);
    return 0;
}
void entrada(int &t,int &f,int &h){   //A->65
    cout<<"*****************************\n";
    cout<<"**Introduzca x,m y c*********\n";
    cout<<"*****************************\n";
    if(cin>>t>>f>>h)
    {
         cout<<"datos leidos correctamente ";
    }
    else
        cout<<"datos erroneos";
}

