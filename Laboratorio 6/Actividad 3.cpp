#include <stdio.h>

int contraseña, input;

int main() {

   contraseña = 21517920;

   printf("Bienvenido, al sistema.\n");

   printf("\nPara iniciar ingrese su contraseña:\n");
   scanf("%d,", & input);

   if (input == contraseña) {
      printf("\nIngreso exitoso. Bienvenido al sistema.");
   } else {
      printf("\nContraseña incorrecta. Quedan 2 intentos.\n");
      printf("Ingrese su contraseña: ");
      scanf("%d,", & input);

      if (input == contraseña) {
         printf("\nIngreso exitoso. Bienvenido al sistema.");
      } else {
         printf("\nContraseña incorrecta. Queda 1 intento.\n");
         printf("Ingrese su contraseña: ");
         scanf("%d,", & input);

         if (input == contraseña) {
            printf("\nIngreso exitoso. Bienvenido al sistema.");
         } else {
            printf("\n 3 intentos fallidos. Usuario bloqueado. Contacte con soporte");
         }

      }
   }
   return 0;
}