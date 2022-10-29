#include <stdio.h>
#include <assert.h>

int main(void) {
    int x, y;
 printf ("Ingrese un valor para x\n");
 scanf ("%d", &x);
 printf ("Ingrese un valor para y\n");
 scanf ("%d", &y);
 assert(x != y);
 if (x < y)
 {
    printf ("El resultado es %d\n", x);
 }
 if (y < x)
 {
    printf ("El resultado es %d\n", y);
 }
 return 0;
}
 
 