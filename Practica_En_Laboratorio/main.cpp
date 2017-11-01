#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "Practica_En_Laboratorio.h"

using namespace std;

int main()
{
    char op;
    int numero;
    do
    {
        /*
        Se Hace un menú con switch char para evitar que el usuario
           coloque alguna letra o palabra y el programa se caiga.
        */


        system("cls");

        cout<<"\t\tMenu ejercicios de practica" <<endl<<endl;
        cout<<"1.-Mostrar Digitos y Su Longitud" <<endl;
        cout<<"2.-Suma De Digitos Pares" <<endl;
        cout<<"3.-Suma Divisores" <<endl;
        cout<<"4.-Verificar Numero Perfecto" <<endl;
        cout<<"5.-Verificar Numero Primo" <<endl;
        cout<<"6.-Mostrar N Numeros Primos" <<endl;
        cout<<"7.-Mostrar N Numeros Perfectos" <<endl;
        cout<<"8.-Salir" <<endl;
        cout << endl <<"Ingrese la opcion que desea evaluar:  ";
        cin >> op;

        switch (op)
        {
            case '1':
                    system("cls");
                    /*
                    Se coloca un Do While para verificar que el número es
                        entero positivo (como indica la guía)
                    */
                    do
                    {
                        cout<<"Ingrese El Numero Que Desea Evaluar:  ";
                        cin>> numero;
                    }
                    while(numero<0);

                    cout << digitos(numero)<<endl;
                    getchar();
                    getchar();
                    break;

            case '2':
                    system("cls");
                    do
                    {
                        cout<<"Ingrese El Numero Que Desea Evaluar:  ";
                        cin>> numero;
                    }
                    while(numero<0);

                    cout << Suma_Pares(numero)<<endl;
                    getchar();
                    getchar();
                    break;
            case '3':
                    system("cls");
                    do
                    {
                        cout<<"Ingrese El Numero Que Desea Evaluar:  ";
                        cin>> numero;
                    }
                    while(numero<0);
                    cout << Suma_Div(numero)<<endl;
                    getchar();
                    getchar();
                    break;
            case '4':
                    system("cls");
                    do
                    {
                        cout<<"Ingrese El Numero Que Desea Evaluar:  ";
                        cin>> numero;
                    }
                    while(numero<0);

                    cout << Perfecto(numero)<<endl;
                    getchar();
                    getchar();
                    break;
            case '5':
                    system("cls");
                    do
                    {
                        cout<<"Ingrese El Numero Que Desea Evaluar:  ";
                        cin>> numero;
                    }
                    while(numero<0);

                    cout << Primo(numero)<<endl;
                    getchar();
                    getchar();
                    break;
            case '6':
                    system("cls");
                    do
                    {
                        cout<<"Ingrese La Cantidad Que Desea Mostrar:  ";
                        cin>> numero;
                    }
                    while(numero<0);

                    Imprime_Primos(numero);
                    getchar();
                    getchar();
                    break;
            case '7':
                    system("cls");
                    do
                    {
                        cout<<"Ingrese La Cantidad Que Desea Evaluar:  ";
                        cin>> numero;
                    }
                    while(numero<0);

                    Imprime_Perfectos(numero);
                    getchar();
                    getchar();
                    break;
            case '8':
                    system("cls");
                    EXIT_SUCCESS;
                    break;
            default :
                    system("cls");
                    cout << "\t\tIngrese Una Opcion Valida"<<endl;
                    getchar();
                    getchar();
                    break;
        }
    }while(op!='8');

}
