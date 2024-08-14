#include <stdio.h>
#include<stdlib.h>
#include<math.h> 

int main (){
	float radio, altura, areabase, arealateral, areatotal;
	float volumen, pi = 3.1416, alturalateral;
	
	printf ("Para calcular el area y volumen de un cono, introduce:\n");
	printf ("su radio:\n");
	scanf ("%f", &radio);
	printf ("su altura:\n");
	scanf ("%f", &altura);
	
	alturalateral = sqrt ((radio * radio) + (altura * altura));
	areabase = pi * (radio*radio);
	arealateral = pi * radio * alturalateral;
	areatotal = areabase + arealateral;
	printf ("El area total del cono es: %.2f\n", areatotal);
	
	volumen = (pi* radio * radio * altura) / 3;
	printf ("El volumen del cono es: %.2f\n", volumen);
	
	system ("pause");
	return 0;
} 