#include <stdio.h>

typedef struct _persona {
char *nombre;
int edad;
float altura;
float peso;
} persona_t;

persona_t persona_de_mayor_edad(persona_t arr[], unsigned int longitud) {
    unsigned int i = 0;
    persona_t res;
    res.edad = arr[0].edad;
    res.nombre = arr[0].nombre;
    while (i < longitud)
    {
        if (arr[i].edad > res.edad)
        {
            res.edad = arr[i].edad;
            res.nombre = arr[i].nombre;
        }
        i = i + 1;
    }
    return res;
}

persona_t persona_de_menor_altura(persona_t arr[], unsigned int longitud) {
    unsigned int i = 0;
     persona_t res;
    res.altura = arr[0].altura;
    res.nombre = arr[0].nombre;
    while (i < longitud)
    {
        if (arr[i].altura < res.altura)
        {
            res.altura = arr[i].altura;
            res.nombre = arr[i].nombre;
        }
        i = i + 1;
    }
    return res;
}

float peso_promedio(persona_t arr[], unsigned int longitud) {
    unsigned int i = 0;
     persona_t res;
    res.peso = 0.0;
    while (i < longitud)
    {
        res.peso = res.peso + arr[i].peso;
        i = i + 1;
    }
    res.peso = res.peso/longitud;
    return res.peso;
}

int main(void) {
persona_t p1 = {"Paola", 21, 1.85, 75};
persona_t p2 = {"Luis", 54, 1.75, 69};
persona_t p3 = {"Julio", 40, 1.70, 80};
unsigned int longitud = 3;
persona_t arr[] = {p1, p2, p3};
printf("El peso promedio es %f\n", peso_promedio(arr, longitud));
persona_t p = persona_de_mayor_edad(arr, longitud);
printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
p = persona_de_menor_altura(arr, longitud);
printf("El nombre de la persona con menor altura es %s\n", p.nombre);
return 0;
}