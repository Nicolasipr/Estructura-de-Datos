#include <iostream>
using namespace std;

void llenar(int A[], int n){
    int i;
    for(i=0; i<n; i++){
        cout << "Ingrese dato : ";
        cin >> A[i];
    }
}
void mostra(int A[], int n){
    int i;
    for(i=0; i<n; i++){
        cout << "Dato A["<<i<<"] = " << A[i] << endl;
    }
}

int Mayor(int A[], int n){
    int i;
    int aux = A[0];
    for(i=0; i<n; i++){
        if(A[i] > aux){
            aux = A[i];
        }
    }
    return aux;
}
