        #include <stdio.h>

        //Declaramos la variable
        char c;

        int main() {
            printf("A continuación ingresará un carácter y se le indicará el código ASCI de este.\n \n");
            
            //Ingresamos el caracter
            printf("Favor ingresar un carácter: ");
            scanf("%c", &c);  
            
            //Aquí imprimimos la variable
            //Sin embargo cambiando el specifier podemos "mostrarla" de 2 maneras diferentes
            //Con "%c" mostramos el "valor" carácter de la variable
            //Mientras que con "%d" mostramos su valor numérico, es decir, su código ASCII
            printf("\nEl código ASCII de  ''%c'' es ''%d''", c, c);
            
            return 0;
        }   
