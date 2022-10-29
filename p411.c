#include <stdio.h>
#include <assert.h>

#define N 4

struct datos_t
{
    float maximo;
    float minimo;
    float promedio;
};

struct  datos_t stats (float a[], int tam) {
 int i = 0;
 struct datos_t res;
 assert(tam > 0);
 res.minimo = a[0];
 res.maximo = a[0];
 res.promedio = 0; 
 while (i < tam) 
 {
    if (a[i] < res.minimo)
    {
        res.minimo = a[i];
    }
    if (a[i] > res.maximo)
    {
        res.maximo = a[i];
    }
    res.promedio = a[i] + res.promedio;
    i = i + 1;
 }
 res.promedio = res.promedio/tam;
 return res;
}

void pedirArreglo(int a[], int tam){
  int i=0, e = 0;
  do{
    printf("Ingrese el valor para el lugar %d\n",i);
     scanf("%d",&e);
    a[i]=e;
    i=i+1;
  } while(i<tam);
}

int main () {
    struct datos_t d;
    float a[N] = {1.5,0.2,3.5,0.5};
    d = stats(a,N);
    printf("minimo = %f\nmaximo = %f\npromedio = %f\n",d.minimo, d.maximo, d.promedio);
    return 0;
}