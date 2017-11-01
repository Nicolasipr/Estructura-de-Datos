#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

#include "Actividad_Struct.h"

#define MAX 100


using namespace std;

typedef struct Ciudad
{
    std::string Nombre;
    float Temperatura_Max;
    float Temperatura_Min;
    float Agua_Caida;

};

struct Ciudad Ciudades[MAX];

Ciudad Llenar_Ciudad()
{
    Ciudad Nueva_Ciudad;

    cout << "Por Favor Ingrese La Informacion De La Ciudad\n\n\n";

    cout << "Ingrese El Nombre De La Ciudad : ";
    getline(cin, Nueva_Ciudad.Nombre);

    do
    {
       cout << "Ingrese En Grados Celsius La Temperatura Maxima : ";
       cin >> Nueva_Ciudad.Temperatura_Max;
       if (Nueva_Ciudad.Temperatura_Max<=-273.15)
       cout << "La Temperatura Ingresa Es Menor Al Minimo Absoluto"<<endl;

    }while(Nueva_Ciudad.Temperatura_Max<=-273.15);

    do
    {
       cout << "Ingrese En Grados Celsius La Temperatura Minima : ";
       cin >> Nueva_Ciudad.Temperatura_Min;
       if (Nueva_Ciudad.Temperatura_Min<=-273.15)
       cout << "La Temperatura Ingresa Es Menor Al Minimo Absoluto"<<endl;
       if (Nueva_Ciudad.Temperatura_Min>Nueva_Ciudad.Temperatura_Max)
        cout << "La Temperatura Minima No Puede ser Mayor que la Maxima"<<endl;
    }
    while(Nueva_Ciudad.Temperatura_Min<=-273.15 && Nueva_Ciudad.Temperatura_Min<=Nueva_Ciudad.Temperatura_Max);

    cout << "Ingrese La Cantidad De Agua Caida : ";
    cin >> Nueva_Ciudad.Agua_Caida;

    return Nueva_Ciudad;
}

void Llenar_Ciudades(Ciudad Ciudades[], int n)
{

    for (int i=0; i<n; i++)
    {
        system("cls");
        getchar();
        cout << "\t\t\tCiudad numero "<<i+1<<endl;

        Ciudades[i]=Llenar_Ciudad();
    }
}

float Maxima_Temperatura(Ciudad Ciudades[], int n)
{
    float Tmax=-273.15;

    for (int i=0; i<n; i++)
    {
        if(Ciudades[i].Temperatura_Max>=Tmax)
        Tmax=Ciudades[i].Temperatura_Max;

    }
    return Tmax;

}

float Diferencia_Temperatura(Ciudad Ciudades[], int n)
{
    float Suma_Max=0, Suma_Min=0, Tdif=0;
    for (int i=0; i<n;i++)
    {
        Suma_Max+=Ciudades[i].Temperatura_Max;
        Suma_Min+=Ciudades[i].Temperatura_Min;

    }
    Tdif=(Suma_Max-Suma_Min)/n;

    return Tdif;
}

string Nombre_Ciudad_Mayor_Temperatura(Ciudad Ciudades[], int n)
{
    float Suma_Max=0, Suma_Min=0, Tdif, Taux=-273.15;
    int j=0;
    for (int i=0; i<n;i++)
    {
        Tdif=0;
        Suma_Max+=Ciudades[i].Temperatura_Max;
        Suma_Min+=Ciudades[i].Temperatura_Min;
        Tdif=(Suma_Max-Suma_Min)/n;
        if (Tdif>=Taux)
            j=i;

    }


    return Ciudades[j].Nombre;
}


float Agua_Total_Caida(Ciudad Ciudades[], int n)
{
    float Suma_Agua=0;
    for (int i=0; i<n;i++)
    {
        Suma_Agua+=Ciudades[i].Agua_Caida;

    }
    return Suma_Agua;

}



int main()
{
    Ciudad cities[MAX];

    cout << "\t\tTarea Estructuras\n\n\n" << endl;

    int Numero_ciudades;
    cout << "Ingrese El Numero De Ciudades Que Ingresara : ";
    cin >> Numero_ciudades;

    Llenar_Ciudades(cities, Numero_ciudades);
    system("cls");


    for (int i=0; i<Numero_ciudades; i++)
    {
        cout << "Ciudad " << i+1<<endl;
        cout << cities[i].Nombre <<endl;
        cout << cities[i].Temperatura_Max << endl;
        cout << cities[i].Temperatura_Min << endl;
        cout << cities[i].Agua_Caida << endl;
        cout << "\n\n";
    }

    cout << "\n\nLa Temperatura Maxima Es: " << Maxima_Temperatura(cities, Numero_ciudades);

    cout << "\n\nEl Promedio De La Diferencia de Temperatura Entre Las Ciudades, es: "<< Diferencia_Temperatura(cities, Numero_ciudades);



    return 0;
}
