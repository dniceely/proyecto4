#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define N 5

typedef char clave_t;
typedef int valor_t;

struct asoc {
    clave_t clave;
    valor_t valor;
};

bool asoc_existe(struct asoc a[], int tam, clave_t c) {
    int i = 0;
    bool res = false;
    while (i < tam) 
    {
        res = res || a[i].clave == c; 
        i = i+1;
    }
    return res;
}

int main (void){
struct asoc a[N];
clave_t c;
int i=0;
printf ("Introduzca clave a comparar\n");
scanf(" %c",&c);
while (i<N){
    printf("Clave para %d\n",i);
    scanf(" %c",&a[i].clave);
    printf("Valor para %d\n",i);
    scanf("%d",&a[i].valor);
    printf("\n");
    i=i+1;
}
bool res = asoc_existe(a,N,c);
printf("El resultado es %d",res);
    return 0;
}