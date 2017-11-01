#include <iostream>
#include <math.h>
using namespace std;

int cambio(int *A, int *B)
{
    int aux;
    aux=*B;
    *B=*A;
    *A=aux;
}
int cambio1(int A, int B)
{
    int aux;
    aux=B;
    B=A;
    A=aux;
}
int main()
{
    int A=3, B=6;
    cout<< A<<B<<endl;
    cambio1(A,B);
    cout<<A<<B<<endl;

    cambio(&A,&B);
    cout <<A<<B<<endl;

    return 0;
}
