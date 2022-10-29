#include <stdio.h>        
#include <stdbool.h>
#include <assert.h>
#define N 5

void intercambiar(int a[], int tam, int i, int j){
    int x,y;
    if (i < tam && j < tam)
    {
         x=a[i];
         y=a[j];
         a[i]=y;
         a[j]=x;
    }
}

void imprimeArreglo(int a[], int tam){
    int i=0;
    printf("los valores son\n");
    while (i<tam){
    printf("%d\n", a[i] );
    i=i+1;
    }
}

void pedirArregloyvalores(int a[], int tam, int i, int j){
int c = 0;
while (c<tam){
    printf("ingrese valor para el lugar %d\n",c);
    scanf("%d", &a[c] );
    c=c+1;
    }
    assert(i>=0&&i<N);
    assert(j>=0&&j<N);
}

int main(void){
    int a[N];
    int i=0,j=0;
    printf("ingrese posicion en el arreglo\n");
    scanf("%d",&i);
    printf("ingrese posicion en el arreglo\n");
    scanf("%d",&j);
    pedirArregloyvalores(a,N,i,j);
    intercambiar(a,N,i,j);
    imprimeArreglo(a,N);
    return 0;
}