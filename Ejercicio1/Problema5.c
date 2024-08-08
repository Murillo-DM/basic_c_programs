#include <stdio.h> //LIBRERIAS
#include <stdlib.h>

int main (){
	int numero, totalnum = 0;
	
	printf("Ingresa una serie de numeros distintos de cero, pero cuando decidas finalizar introduce 0\n");
	while (1) {
	printf("Ingresa un numero: ");
	scanf("%d", &numero);
	if (numero == 0) {
	break;
	}
	printf("Numero ingresado: %d\n", numero);
	totalnum = totalnum + 1;
	}
	printf("Total de numeros leidos: %d\n", totalnum);

	system ("pause");
	return 0;
}
