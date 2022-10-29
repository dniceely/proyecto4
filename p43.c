#include <stdio.h>

int pedirEntero(void) {
 int n;
 printf ("Ingrese un valor para n\n");
 scanf ("%d", &n);
 return n;
}

int suma_hasta(int N) {
    int res = 0;
    int i = 0;
    while (i <= N)
    {
        res = i + res;
        i = i + 1;
    }
    return res;
}
    
int main (void) {
    int N = pedirEntero();
    if (N < 0)
    {
        printf("Ingrese un entero positivo\n");
    }
    if (N >= 0)
    {
        printf("El resultado es %d\n", suma_hasta(N));
    }
    return 0;
}