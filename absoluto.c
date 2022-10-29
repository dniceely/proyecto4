#include <stdio.h>
#include <assert.h>

int main(void) {
    int x;
    printf ("Ingrese un valor para x\n");
 scanf ("%d", &x);
 assert(x != 0);
 if (x < 0)
 {
    printf ("El resultado es %d\n", x*-1);
 }
 if (x > 0)
 {
    printf ("El resultado es %d\n", x);
 }
 return 0;
}
 
