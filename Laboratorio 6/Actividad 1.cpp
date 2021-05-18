#include <stdio.h>

int num;

int main() {

    printf("A continuación ingresará un número entero y se le indicará si este es par o impar.\n");
    
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("%d es par.", num);
    } else {
        printf("%d es impar.", num);
        }
    
    return 0;
}
