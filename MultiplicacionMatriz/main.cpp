#include <iostream>

using namespace std;

int main()
{

    int A[10][10];
    int B[10][10];

    cout << "Ingrese el dato: ";
    int n;
    cin >> n;


    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << "Ingrese el dato A["<< i << "][" << j << "]: ";
            cin >> A[i][j];

        }
    }

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << "Ingrese el dato B[" << i << "][" << j <<"]: ";
            cin >> B[i][j];

        }
    }

    int C[10][10];
    int suma, cont=0;

    for (int i = 1; i <=n; i++)
    {
        for(int j = 1; j <=n; j++)
        {

            C[i][j]=A[i][j] * B[j][i];
            cout << " " << C[i][j];
            cont=0;
        }
        cout << "\n";
    }




    cout << "Hello world!" << endl;
    return 0;
}
