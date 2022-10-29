#include <stdio.h>
#include <stdbool.h>

int pedirEntero(void) {
 int n;
 printf ("Ingrese un valor para n\n");
 scanf ("%d", &n);
 return n;
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

int nesimo_primo(int N) {
    int count = 0;
    int p = 2;
    int res = 0;
    while (count <= N)
    {
        if (es_primo(p))
        {
            res = p;
            count = count + 1;
        }
        p = p + 1;
    }
    return res;
}

int main(void) {
    int N = pedirEntero();
    while (N < 0)
    {
        printf("Ingrese un entero no negativo\n");
        scanf("%d", &N);
    }
    int d = nesimo_primo(N);
    printf("El resultado es %d", d);
    return 0;
}