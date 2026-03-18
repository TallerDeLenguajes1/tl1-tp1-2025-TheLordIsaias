// codigo_roto.c

void duplicar_numero(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2;
    
    printf("La suma es: %d\n", suma);
    int *pValor1 = &valor1;
    duplicar_numero(pValor1);
    printf("El primer valor duplicado es: %d\n", *pValor1);

    return 0;

}