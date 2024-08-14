#include <stdio.h>
#include<stdlib.h>

int main (){
    int num1, num2, num3;
    
    printf("Ingrese el primer numero:\n");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero:\n");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero:\n");
    scanf("%d", &num3);

    if (num3 > 0) {
        int suma = num1 + num2 + num3;
        printf("La suma de los tres numeros es: %d\n", suma);
    } else {
        int producto = num1 * num2 * num3;
        printf("El producto de los tres números es: %d\n", producto);
    }

	system("pause");
	return 0;
}