#include <stdio.h>

int puntos, codProd, precio, puntosRestantes, puntosAcum;
char respuesta;

int main() {

   printf("Bienvenido a la caja\n");

   printf("\nPara iniciar ingrese sus puntos:");
   scanf("%d", & puntos);
   printf("\nTiene %d puntos\n", puntos);

   printf("\nIngrese código producto:\n");
   scanf("%d", & codProd);

   printf("\nIngrese precio producto:\n");
   scanf("%d", & precio);

   if (puntos * 10 >= precio) {
      puntosRestantes = puntos - (precio / 10);
      printf("\nTiene puntos suficientes para cubrir la compra.\nDespués de esta compra tendrá: %d puntos", puntosRestantes);
      printf("¿Desea pagar con puntos? Esta compra no acumulará puntos. (S/N): ");
      getchar();
      scanf("%c", & respuesta);

      if (respuesta == 'S' || respuesta == 's') {
         printf("Gracias por su compra.\nAhora tiene: %d puntos", puntosRestantes);
      } else {
         printf("\nPuntos insuficientes para canjear. Siga acumulando,\n");

         if (codProd >= 100 && codProd < 200 && precio < 10000) {
            puntos = puntos + (precio / 100);
            puntosAcum = precio / 100;

            printf("\nGracias por su compra, ha sumado: %d puntos. Su nuevo total es: %d puntos.", puntosAcum, puntos);
         } else if (codProd >= 100 && codProd < 200 && precio >= 10000) {
            puntos = puntos + (precio / 50);
            puntosAcum = precio / 50;

            printf("\nGracias por su compra, ha sumado: %d puntos. Su nuevo total es: %d puntos.", puntosAcum, puntos);

         } else if (codProd >= 200 && codProd < 300 && precio < 10000) {
            puntos = puntos + (precio / 50);
            puntosAcum = precio / 50;

            printf("\nGracias por su compra, ha sumado: %d puntos. Su nuevo total es: %d puntos.", puntosAcum, puntos);

         } else if (codProd >= 200 && codProd < 300 && precio >= 10000) {
            puntos = puntos + (precio / 30);
            puntosAcum = precio / 30;

            printf("\nGracias por su compra, ha sumado: %d puntos. Su nuevo total es: %d puntos.", puntosAcum, puntos);

         }
      }
   } else {
      printf("\nPuntos insuficientes para canjear. Siga acumulando,\n");

      if (codProd >= 100 && codProd < 200 && precio < 10000) {
         puntos = puntos + (precio / 100);
         puntosAcum = precio / 100;

         printf("\nGracias por su compra, ha sumado: %d puntos. Su nuevo total es: %d puntos.", puntosAcum, puntos);
      } else if (codProd >= 100 && codProd < 200 && precio >= 10000) {
         puntos = puntos + (precio / 50);
         puntosAcum = precio / 50;

         printf("\nGracias por su compra, ha sumado: %d puntos. Su nuevo total es: %d puntos.", puntosAcum, puntos);

      } else if (codProd >= 200 && codProd < 300 && precio < 10000) {
         puntos = puntos + (precio / 50);
         puntosAcum = precio / 50;

         printf("\nGracias por su compra, ha sumado: %d puntos. Su nuevo total es: %d puntos.", puntosAcum, puntos);

      } else if (codProd >= 200 && codProd < 300 && precio >= 10000) {
         puntos = puntos + (precio / 30);
         puntosAcum = precio / 30;

         printf("\nGracias por su compra, ha sumado: %d puntos. Su nuevo total es: %d puntos.", puntosAcum, puntos);

      }
   }

   return 0;
}