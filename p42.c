#include <stdio.h>

int pedirEntero(void) {
 int n;
 printf ("Ingrese un valor para n\n");
 scanf ("%d", &n);
 return n;
}

int main(void) {
int x, y, xaux;
x = pedirEntero();
y = pedirEntero();
xaux = x;
x = x + 1;
y = xaux + y;
    return 0;
}