//Agregamos la librería 'math.h' para poder elevar
#include <stdio.h>
#include <math.h>

//declaramos variables
float pi, radio, area, perimetro;

int main() {
   
   //definimos pi
   pi = 3.14;

   printf("Bienvenido, a continuación ingresará el radio\nde un círculo y se le entregará el area y el perímetro.\n");




   printf("\nFavor ingresar el radio en cm: ");
   scanf("%f", &radio);

   //Agregamos '.2 y .3' antes del specifier para limitar la cantidad de decimales
   //En caso de requerirse más este puede remover o modificar
   perimetro = 2*radio*pi;
   printf("\nEl perimetro del circulo es %.2f cm ", perimetro);

   //usamos la función pow para elevar
   area = pi*radio*pow(pi,2);
	 printf("\nEl área del círculo es %.3f cm cuadrados\n", area);

return(0);
}