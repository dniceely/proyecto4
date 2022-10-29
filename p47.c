#include <stdio.h>
#include <stdbool.h>
#define N 5

bool existe_positivo(int a[], int tam) {
    int i = 0;
    int res = 0;
    while (i < tam)
    {
        if (a[i] > 0)
        {
            res = true;
        }
        i = i + 1;
    }
     if (res == true)
        {
            printf("Verdadero");
        }
        if (res == 0)
        {
           printf("falso");
        }
    return res;
}
    
bool todos_positivos(int a[], int tam) {
    int i = 0;
    int res = 0;
    int f = 5;
    while (i < tam)
    {
        if (a[i] > 0)
        {
            res = true;
        }
        if (a[i] < 0)
    {
        f = false;
    }
     i = i + 1;
    }
     if (res == true && f == 5)
        {
            printf("verdadero");
        }
        if (f == false)
        {
            printf("falso");
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
    int a[N];
    int e = 0;
    pedirArreglo(a, N);
    printf("1: Existe positivo o 2: Todos positivos?\n");
    scanf("%d",&e);
    if (e == 1)
    {
        existe_positivo(a, N);
    }
    if (e == 2)
    {
        todos_positivos(a,N);
    }
    return 0;
}