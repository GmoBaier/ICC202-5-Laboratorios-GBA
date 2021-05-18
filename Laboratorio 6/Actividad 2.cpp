#include <stdio.h>

int num1, num2, num3;

int main() {
   printf("A continuación ingresará 3 números entero y se le indicará cúal es el mayor o si son iguales.\n");

   printf("Ingrese 3 números enteros en formato x, y, z: ");
   scanf("%d, %d, %d", & num1, & num2, & num3);

   if (num1 == num2 && num2 == num3) {
      printf("Los 3 números son iguales");
   } else if (num1 >= num2 && num1 >= num3) {
      printf("%d es el número más grande.", num1);
   } else if (num2 >= num1 && num2 >= num3) {
      printf("%d es el número más grande.", num2);
   } else {
      printf("%d es el número más grande.", num3);
   }
   return 0;
}