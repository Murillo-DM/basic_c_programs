#include <stdio.h>
#include<stdlib.h>

int main (){
	
	int a, b, c, suma, producto;
	
	printf("Introduce el primer numero\n");
	scanf ("%d", &a);
	printf("Introduce el segundo numero\n");
    scanf ("%d", &b);
    printf("Introduce el tercer numero\n");
    scanf ("%d", &c);
   
    suma = a + b + c;
    printf ("La suma de los tres numeros es: %30d\n", suma);
	producto = a * b * c;
    printf("El producto de los tres numeros es: %30d\n", producto);
    
	system("pause");
	return 0;
}