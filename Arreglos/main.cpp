#include <iostream>
#include "funcionArreglo.h"

using namespace std;

int main()
{
    cout << "Uso de arreglos" << endl;
    int A[100];
    int n;
    cout << "Ingrese n : ";
    cin >> n;
    llenar(A,n);
    mostra(A,n);
    cout << "El mayor es  : " << Mayor(A,n) << endl;
    return 0;
}
