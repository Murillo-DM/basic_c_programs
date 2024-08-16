#include <stdio.h>
#include<stdlib.h>

int main (){
	
	long long num, a = 0, b = 1, c;
	
	printf ("Serie de Fibonacci\n");
	printf ("Introduce un numero positivo mayor a 2 y menor que 93:\n");
	scanf ("%lld", &num);
	 if (num <= 2 || num >= 93) {
	        printf("El numero debe ser mayor que 2 y menor que 93\n");
	        system ("pause");
	        return 1;  
	    }
	printf("Los primeros %d numeros de la serie de Fibonacci son:\n", num); //los primeros dos numeros de la sucesion de la serie de fibonacci siempre son 0 y 1
	printf("%lld\n", a);
	printf("%lld\n", b);
	
	for (long long x = 2; x < num; x++) { 
		c = a + b;  //sumar los dos numeros anteriores
	    printf("%lld\n", c);
	    a = b; //para que continue el bucle se actualizan sus valores para que estos se tomen el siguiente valor y sean ocupados de nuevo
	    b = c;
	     }

	system ("pause");
	return 0;
} 