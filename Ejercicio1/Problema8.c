#include <stdio.h> //LIBRERIA
#include <stdlib.h>

int main() {
    int potencia = 1;// 2 elevado a 0 es 1, se inicia en 1
    while (potencia <= 100) { 
        printf("%d\n", potencia); 
        potencia = potencia * 2; 
    }

   system ("pause");
   return 0;
}