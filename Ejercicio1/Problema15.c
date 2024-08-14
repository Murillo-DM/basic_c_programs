#include <stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2, num3;
    float media;

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);
    printf("Introduce el tercer numero: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3;
    printf("La media de los tres numeros es: %.2f\n", media);

    system("pause");
    return 0;
}
 