#include <stdio.h> //LIBRERIAS
#include <stdlib.h>

int main (){
	int num1, num2, num3;

	printf("Ingrese el primer numero entero: \n");
	scanf("%d", &num1);
    printf("Ingrese el segundo numero entero:\n");
	scanf("%d", &num2);
    printf("Ingrese el tercer numero entero:\n");
    scanf("%d", &num3);

    if (num1 == num2 + num3) {
    printf("%d es igual a la suma de %d y %d.\n", num1, num2, num3);
    } else if (num2 == num1 + num3) {
    printf("%d es igual a la suma de %d y %d.\n", num2, num1, num3);
    } else if (num3 == num1 + num2) {
    printf("%d es igual a la suma de %d y %d.\n", num3, num1, num2);
    } else {
    printf("Ninguno de los numeros es igual a la suma de los otros dos\n");
    }

	system ("pause");
	return 0;
}
