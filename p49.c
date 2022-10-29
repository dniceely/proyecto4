#include <stdio.h>
#include <limits.h>

void pedirArreglo(int a[], int tam){
  int i=0, e = 0;
  do{
    printf("Ingrese el valor para el lugar %d\n",i);
     scanf("%d",&e);
    a[i]=e;
    i=i+1;
  } while(i<tam);
}

int minimo_pares(int a[], int tam) {
    int res = INT_MAX;



    int i = 0;
    while (i < tam)
    {
        if (a[i] % 2 == 0 && a[i] < res)
        {
            res = a[i];
        }
        i = i +1;
    }
    return res;
}

int minimo_impares(int a[], int tam) {
    int res = INT_MAX;



    int i = 0;
    while (i < tam)
    {
        if (a[i] % 2 == 1 && a[i] < res)
        {
            res = a[i];
        }
        i = i +1;
    }
    return res;
}

#define N 4

int main(void) {
    int a[N];

    pedirArreglo(a, N);

    int min_par = minimo_pares(a, N);
    int min_impar = minimo_impares(a, N);

    int minimo;
    if (min_par <= min_impar)
    {
        minimo = min_par;
    }
    else {
        minimo = min_impar;
    }
    
    printf("El minimo elemento es %d\n", minimo);
  
    return 0;
}
