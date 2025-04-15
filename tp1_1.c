#include <stdio.h>

int main() {
    int num = 5, *puntero;

    puntero = &num;

    
    printf("Hola mundo \n");
    printf("El contenido del puntero es: %d \n", *puntero);
    printf("La dirección de memoria almacenada por el puntero es: %p \n", puntero);
    printf("La dirección de memoria de la variable es: %p \n", &num);
    printf("La dirección de memoria del puntero es: %p \n",&puntero);

    printf("El tamaño de memoria utilizado por la variable usando la función sizeof() es: %d bytes", sizeof(num));

    return 0;
}