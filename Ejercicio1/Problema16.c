#include <stdio.h>
#include<stdlib.h>

int main (){
	float radio, area, circunferencia, pi = 3.1416;
	
	printf ("Para calcular el area y circunferencia del circulo,\n");
	printf("Introduzca el valor del radio:\n");
	scanf ("%f", &radio);
	
	area= pi * radio * radio;
	printf ("El area del circulo es: %.2f\n", area);
	circunferencia = (2 * pi) * radio;
	printf ("La circunferencia del circulo es: %.2f \n", circunferencia);
	
	system("pause");
	return 0;
}