  
#include <stdio.h>

// Declaramos variables
int num1, num2, suma;


int main(){ 
    printf("A continuación se le entregará el resultado de la adición de 2 números enteros.\n \n");


    // Ingresamos las variables
    printf("Favor ingresar el primer número: ");
    scanf("%d", &num1);

    printf("\nFavor ingresar segundo número: ");
    scanf("%d", &num2);

    // Realizamos la operación
    suma = num1 + num2;

    // Entregamos resultado
    printf("\nEl resultado de la adicción entre %d y %d es %d\n", num1, num2, suma);
    return 0;
}