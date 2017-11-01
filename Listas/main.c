#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int dato;
    struct nodo *link;
}lista;



int main()
{
    struct lista *L;
    L=malloc(sizeof(struct lista));

    L->dato=0;
    L->link=NULL;

    lista *p=malloc(sizeof(lista));
    p=L;
    p->link=NULL;

    printf("INrese la cantidad de numeros a ingresar: ");
    int n;
    scanf("%d", n);
    int i;
    for(i=0 ; i<n ; i++){

        printf("\Ingrese el valor: ");
        int a;
        scanf("%d", a);
        p->dato=a;
        p->link=L;
        L=p;

    }




    return 0;
}
