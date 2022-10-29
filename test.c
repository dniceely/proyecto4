#include <stdio.h>
#define N 5

void pedirArreglo(int a[], int tam){
  int i=0, e = 0;
  do{
    printf("Ingrese el valor para el lugar %d\n",i);
     scanf("%d",&e);
    a[i]=e;
    i=i+1;
  } while(i<tam);
}

int main(void) {
    int a[N];
    pedirArreglo(a, N);
    return 0;
}


bool es_primo(int p) {
    int i = 2;
    bool res = true;
    while (i < p - 1)
    {
      res = res && p % i != 0;
      i = i + 1;
    }
    return res;
}