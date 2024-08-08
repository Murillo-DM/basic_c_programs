#include <stdio.h> //LIBRERIAS
#include <stdlib.h>

int main (){
	float base, altura, area;
	
	printf("Bienvenid@, para calcular el area del triangulo\n");
	printf("Ingrese la base:\n");
	scanf ("%f", &base);
	printf("Ingrese la altura:\n");
	scanf ("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf ("El area del triangulo es: %.3f\n", area);
	
	system ("pause");
	return 0;//FIN DEL PROGRAMA
}
