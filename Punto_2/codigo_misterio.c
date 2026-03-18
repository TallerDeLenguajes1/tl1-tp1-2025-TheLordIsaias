#include <stdio.h>

void invertirNumero(int *num) {
    int numeroTemporal = *num;
    int numeroInvertido = 0;
    while (numeroTemporal > 0) {
        numeroInvertido = (numeroInvertido * 10) + (numeroTemporal % 10);
        numeroTemporal = numeroTemporal / 10;
    }
    *num = numeroInvertido;
}

void dividirPorDos(int *num) {
    *num = *num / 2;
}

void sumaDeDigitos(int *num) {
    int numeroTemporal = *num;
    int sumaDigitos = 0;
    while (numeroTemporal > 0) {
        sumaDigitos = sumaDigitos + (numeroTemporal % 10);
        numeroTemporal = numeroTemporal / 10;
    }
    *num = *num + sumaDigitos;
}

void procesar_enigma(int *num) {
    invertirNumero(num);
    dividirPorDos(num);
    sumaDeDigitos(num);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}