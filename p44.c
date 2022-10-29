#include <stdio.h>

struct div_t {
int cociente;
int resto;
};

int pedirEntero(void) {
 int n;
 printf ("Ingrese un valor\n");
 scanf ("%d", &n);
 return n;
}

struct div_t division(int x, int y) {
    struct div_t div;
    div.cociente = y / x;
    div.resto = y % x;
    return div;
}

int main (void) {
    int x = pedirEntero();
    int y = pedirEntero();
    struct div_t d;
    if (x != 0)
    {
        d = division(x, y);
        printf("El cociente es %d\n", d.cociente);
        printf("El resto es %d\n", d.resto); 
    }
        if (x <= 0 && x >= 0)
    {
        printf("Ingrese un divisor no nulo");
    }
    return 0;
}