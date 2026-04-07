#include <stdio.h>

int main(){
    int x = 5;
    int *pX = &x;
    printf("Contenido del puntero: %d\n", *pX);
    printf("Direccion que contiene el puntero: %p\n", pX);
    printf("Direccion de memoria de la variable: %p\n", &x);
    printf("Direccion de memoria del puntero: %p\n", &pX);
    printf("Tamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(x));
    return 0;
}