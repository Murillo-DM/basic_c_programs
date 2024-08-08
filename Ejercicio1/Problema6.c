#include <stdio.h>//LIBRERIAS
#include <stdlib.h>

int main(){
	int suma;
	printf("Serie de numeros de los multiplos de 3 hasta 99 y su suma:\n");
	for (int a = 3; a <= 99; a += 3) {
	printf("%d ", a);    
	suma = suma + a; 
	}
	printf("La suma total de la serie es: %d\n", suma);

	system ("pause");
	return 0;
}