#include <stdio.h>

int pedirEntero(void) {
 int n;
 printf ("Ingrese un valor para n\n");
 scanf ("%d", &n);
 return n;
}

int main(void) {
int x, y, z, xaux, zaux, yaux;
x = pedirEntero();
y = pedirEntero();
z = pedirEntero();
xaux = x;
zaux = z;
yaux = y;
x = y;
y = xaux + y + zaux;
z = xaux + yaux;
    return 0;
}