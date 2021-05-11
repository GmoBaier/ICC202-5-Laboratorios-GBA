   #include <stdio.h>

   //Declaramos la variable
   float num1, num2, producto;

   int main(){

      printf("A continuación ingresará 2 números en el formato ''X.X, Y.Y'' y \nse le entregará el resultado de su multiplicación.\n");

      
      //Ingresamos los inputs en el formato solicitado
      printf("\nIngresar los 2 números: ");
      scanf("%f, %f", &num1,&num2); 

      //Realizamos la multiplicación
      producto = num1 * num2;

      //Agregamos '.3' antes del specifier para limitar la cantidad de decimales
      //En caso de requerirse más este puede remover o modificar
      printf("\nEl producto de %.3f y %.3f es %.3f", num1, num2, producto);
      return 0;
   }     