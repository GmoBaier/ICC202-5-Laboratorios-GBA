#include <stdio.h>

//Declaramos las variables
float tarea1, tarea2, tarea3, actitudinal, prueba1, prueba2, ponderación, nota_aprobar;

int main() {

   //Bienvenida
   printf("Bienvenido, a continuación se le pediran que ingrese sus calificaciones\nhasta el momento en el formato n.n y se le indicará la nota mínima\nrequerida en la prueba 2 para aprobar el ramo, siendo la nota de\naprobación un 4.0.\n\n");

   //Ingresamos los valores
   printf("Favor ingresar nota Tarea 1:");
   scanf("%f", &tarea1);

   printf("\nFavor ingresar nota Tarea 2:");
   scanf("%f", &tarea2);
   
   printf("\nFavor ingresar nota Tarea 3:");
   scanf("%f", &tarea3);

   printf("\nFavor ingresar nota Actitudinal:");
   scanf("%f", &actitudinal);

   printf("\nFavor ingresar nota Prueba 1:");
   scanf("%f", &prueba1);

   //Calculamos la variable transitoria 'ponderación'
   ponderación = (tarea1*0.1) + (tarea2*0.1) + (tarea3*0.1) + (actitudinal*0.1) + (prueba1*0.25);

   nota_aprobar = (4.0 - ponderación) / .35;
   


  printf("\n\nLa nota mínima requerida para aprobar es %.2f\n", nota_aprobar);

return(0);
}