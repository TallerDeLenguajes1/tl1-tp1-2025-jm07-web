
#include <stdio.h>
//Declaro las funciones
int cuadradoDeNum(int num);
void cuadradoDeNumVersion2(int num, int *resultado);
void mostrarDirecciónContenidoVariable(int *variable);
void Invertir(int *a, int *b);
void orden(int *a, int *b);
void leerImprimerDosValores();

int main() {
    int num, resultado1, resultado2, a, b;

    //Pido un número para las funciones 1 y 2
    printf("Ingrese un número: ");
    scanf("%d", &num);

    //Uso la función 1
    resultado1 = cuadradoDeNum(num);
    printf("\nEl cuadrado del número calculado por la fción 1 es: %d \n", resultado1);

    //Uso la función 2
    cuadradoDeNumVersion2(num, &resultado2);
    printf("El cuadrado del número calculado por la fción 2 es: %d \n", resultado2);

    //Uso la función 3
    mostrarDirecciónContenidoVariable(&num);

    //Pido dos números para la función 4
    printf("\nIngrese un número a: ");
    scanf("%d", &a);

    printf("\nIngrese un número b: ");
    scanf("%d", &b);

    //Uso la función 4
    Invertir(&a, &b);

    printf("\nValores invertidos: a = %d , b = %d \n", a,b);

    //Uso la función 5
    orden(&a, &b); //Uso los en este caso las variables con los valores invertidos

    printf("\nValores ordenados: a = %d , b = %d \n", a,b);

    //Uso la función 6
    printf("\nFunción 6: ");
    leerImprimerDosValores();

    return 0;
}

//Desarrollo las funciones
//Función 1
int cuadradoDeNum(int num)
{
    return (num * num);
}

//Función 2
void cuadradoDeNumVersion2(int num, int *resultado)
{
    *resultado = num * num;
}

//Función 3
void mostrarDirecciónContenidoVariable(int *variable)
{
    printf("La dirección de la variable es: %p \n", variable);
    printf("El contenido de la variable es: %d \n", *variable);
}

//Función 4
void Invertir(int *a, int *b)
{
    int aux = *a;
     *a = *b;
     *b = aux;
}

//Función 5
void orden(int *a, int *b)
{
    if (*a > *b)
    {
        int aux = *a;
        *a = *b;
        *b = aux;
    } else if (*a == *b)
    {
        printf("Los valores son iguales");
    }    
}

//Función 6
void leerImprimerDosValores()
{
    int A,B;

    //Pido que ingresen un par de valores
    printf("\nIngrese el primer valor A: ");
    scanf("%d",&A);

    printf("\nIngrese el segundo valor B: ");
    scanf("%d",&B);

    //Muestro los valores originales
    printf("\nValores originales: A = %d , B = %d", A,B);
    
    //Uso las funciones 4 y 5
    Invertir(&A, &B);
    printf("\nLuego de usar la fción invertir: A = %d , B = %d", A,B);

    orden(&A, &B);
    printf("\nLuego de usar la fción ordenar : A = %d , B = %d", A,B);
}