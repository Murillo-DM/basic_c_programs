#include <stdio.h>
#include<stdlib.h>

int main() {
	int numero;
	
	printf("Introduce un numero: ");
	scanf("%d", &numero);
	
    printf("El numero es %s\n", //operador ternario para determinar el resultado
	(numero > 0) ? "positivo" : 
	(numero < 0) ? "negativo" : 
	 "igual a cero");

	system("pause");
	return 0;
}