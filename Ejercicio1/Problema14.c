#include <stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2, num3;

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);
    printf("Introduce el tercer numero: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) { //mayor
        printf("El mayor numero es: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("El mayor numero es: %d\n", num2);
    } else {
        printf("El mayor numero es: %d\n", num3);
    }

    if (num1 <= num2 && num1 <= num3) { //menor
        printf("El menor numero es: %d\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("El menor numero es: %d\n", num2);
    } else {
        printf("El menor numero es: %d\n", num3);
    }

	system("pause");
	return 0;
}