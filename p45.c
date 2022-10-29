#include <stdio.h>
#define N 5

void pedirArreglo(int n_max, int a[]) {
    int i = 0;
    while (i < n_max) {

        scanf("%d", &a[i]);
        i=i+1;
    }
}

void imprimeArreglo(int n_max, int a[]) {
    int i = 0;
    while (i < n_max) {
            printf("%d, ", a[i]);
            i=1+i;
    }
}

int main(void) {
    int n_max;
    int a[N];
    n_max = 5;
    printf("Ingrese %d numeros\n",N);
    pedirArreglo(n_max, a);

    printf("Los numeros ingresados son:\n");
    imprimeArreglo(n_max,a);

    return 0;
}


// esta funcion para pedirarreglo esta mas copada.
//void pedirArreglo(int a[], int tam){
//  int i=0, e = 0;
//  do{
//    printf("Ingrese el valor para el lugar %d\n",i);
//     scanf("%d",&e);
//    a[i]=e;
//    i=i+1;
//  } while(i<tam);
//}