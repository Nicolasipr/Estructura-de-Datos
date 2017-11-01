#include <iostream>
#include "Laboratorio_2.h"

using namespace std;

void soloHombres(int A[][100], int n, int m )
{
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=m; j++)
            {
                if((A[i][j]/100)==(A[i][j]/10)%10)
                    cout << (i*10)+j << " ";
            }
            cout << endl;
        }
}


int totalMujeres(int A[][6], int n, int m)
{
    int suma=0;
    for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=m; j++)
            {
                suma+=A[i][j]%10;
            }
        }

    return suma;
}
