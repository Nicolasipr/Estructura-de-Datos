#include <iostream>
#include <cstdlib>
#include "Practica_En_Laboratorio.h"

using namespace std;

int digitos(int numero)
{
    int aux=0, cont=0;
    cout << "Los digitos son: "<<endl;
    while (numero!=0)
    {
        aux=numero%10;
        cout<< "\t\t" <<aux << endl;
        cont++;
        numero=numero/10;
    }
    cout << "\nLa cantidad de digitos es: ";
    return cont;
}

int Suma_Pares(int numero)
{
    int aux=0, suma=0;
    while (numero!=0)
    {
            aux=numero%10;
            if(aux%2==0)
                suma+=aux;
            numero=numero/10;
    }

    return suma;
}

int Suma_Div(int numero)
{
   int aux=0, suma=0;
   for (int i=1; i<=numero; i++)
   {
       if(numero%i==0)
        suma+=i;
   }

   return suma;
}

bool Perfecto(int numero)
{
    if (int verificador=(Suma_Div(numero))==(2*numero))
        return true;
    return false;
}

bool Primo(int numero)
{
    if ((Suma_Div(numero))==(numero+1))
        return true;
    return false;
}

void Imprime_Primos(int numero)
{
    for (int i=1; i<=numero ; i++)
    {
        if (Primo(i)==true)
            cout << i << endl;
    }
}

void Imprime_Perfectos(int numero)
{
    for(int i=1; i<=numero; i++)
    {
        if (Perfecto(i)==true)
            cout << i << endl;
    }
}
