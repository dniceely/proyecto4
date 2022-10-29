#include <stdio.h>
#include <assert.h>

#define N 5

struct comp_t {
int menores;
int iguales;
int mayores;
};

struct comp_t cuantos(int a[], int tam, int elem) {
    int i = 0;
    struct comp_t res;
    res.menores = 0;
    res.iguales = 0;
    res.mayores = 0;
    while (i < tam)
    {
        if (a[i] < elem)
        {
            res.menores = res.menores + 1;
        }
        if (a[i] == elem)
        {
            res.iguales = res.iguales + 1;
        }
        if (a[i] > elem)
        {
            res.mayores = res.mayores + 1;
        }
        i = i + 1;
    }
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

int main (void) {
    struct comp_t d;
    int a[N];
    int e = 0;
    pedirArreglo(a, N);
    printf("Ingrese un elemento\n");
    scanf("%d", &e);
    d = cuantos(a, N, e);
    printf("menores = %d\niguales = %d\nmayores = %d\n", d.menores, d.iguales, d.mayores);
    return 0;
}

    

    