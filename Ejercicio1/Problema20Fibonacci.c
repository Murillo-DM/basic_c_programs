#include <stdio.h>
#include<stdlib.h>

int main (){
	
	int num, a = 0, b = 1, c;
	
	printf ("Serie de Fibonacci\n");
	printf ("Introduce un numero positivo mayor a 2:\n");
	scanf ("%d", &num);
	 if (num <= 2) {
	        printf("El numero debe ser mayor que 2\n");
	        return 1;  
	    }
	printf("Los primeros %d numeros de la serie de Fibonacci son:\n", num); //los primeros dos numeros de la sucesion de la serie de fibonacci siempre son 0 y 1
	printf("%d\n", a);
	printf("%d\n", b);
	
	for (int x = 2; x < num; x++) { 
		c = a + b;  //sumar los dos numeros anteriores
	    printf("%d\n", c);
	    a = b; //para que continue el bucle se actualizan sus valores para que estos se tomen el siguiente valor y sean ocupados de nuevo
	    b = c;
	     }

	system ("pause");
	return 0;
}