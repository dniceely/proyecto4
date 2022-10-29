#include <stdio.h>

#define N 4

int sumatoria(int a[], int tam) {
 int res = 0, i = 0;
 while (i < tam) 
 {
    res = res + a[i];
    i = i + 1;
 }
 
 return res;
}

void pedirArreglo(int tam, int a[]) {
    int i = 0;
    while (i < tam) {

        scanf("%d", &a[i]);
        i=i+1;
    }
}

int main () {
    int a[N], res = 0;
    pedirArreglo(a,N);
    res = sumatoria(a,N);
    printf("El resultado es %i\n", res); 
    return 0;
}