#include <stdio.h>

int cuadradoNumero(int x);
void cuadradoNumeroVoid(int *x);
void mostrarVariable(int x);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){
    int a, b;
    int *pA = &a, *pB = &b;
    printf("Escribe un valor para la variable 'a': \n");
    scanf("%d", &a);
    printf("Escribe un valor para la variable 'b': \n");
    scanf("%d", &b);
    a = cuadradoNumero(a);
    printf("---Elevo al cuadrado la variable 'a'---\n");
    mostrarVariable(a);
    cuadradoNumeroVoid(pB);
    printf("---Elevo al cuadrado la variable 'b'---\n");
    mostrarVariable(b);
    invertir(pA, pB);
    printf("---Cambio el valor de a por el de b, y el de b por el de a---\n");
    printf("--Reviso la variable a--\n");
    mostrarVariable(a);
    printf("--Reviso la variable b--\n");
    mostrarVariable(b);
    orden(pA, pB);
    printf("---Ordeno a y b, de menor a mayor respectivamente---\n");
    printf("--Reviso la variable a--\n");
    mostrarVariable(a);
    printf("--Reviso la variable b--\n");
    mostrarVariable(b);
    return 0;
}

int cuadradoNumero(int x){
    return x*x;
}

void cuadradoNumeroVoid(int *x){
    int aux = *x;

    *x = aux*aux;
}

void mostrarVariable(int x){
    printf("El valor de la variable es: %d\n", x);
}

void invertir(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b){
    if(*a>*b){
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}