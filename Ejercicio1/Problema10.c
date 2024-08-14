#include <stdio.h>
#include<stdlib.h>

int main (){
	
	float celcius, farenheit;
	
	printf("Introduce los grados Celcius para convertirlos en Farenheit\n");
	scanf("%f", &celcius);
	
	farenheit = (celcius * 9/5) + 32;
	printf("El resultado es: %.2f\n", farenheit);
	
	system("pause");
	return 0;
}