#include <stdio.h>
#include <assert.h>

int main(void) {
    int x, y, z;
 printf ("Ingrese un valor para x\n");
 scanf ("%d", &x);
 printf ("Ingrese un valor para y\n");
 scanf ("%d", &y);
 printf ("Ingrese un valor para z\n");
 scanf ("%d", &z);
 assert(x != y);
 while (y != z)
 {
    z = x;
    x = y;
    y = z;
 }
 printf ("El valor de x es %d\n", x);
 printf ("El valor de y es %d\n", y);
 return 0;
}
 
 
 