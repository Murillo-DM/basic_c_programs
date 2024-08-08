#include <stdio.h> //LIBRERIAS
#include <stdlib.h>

int main (){
	float num1, num2, R;
	char operacion; 
	
	printf("Bienvenid@, Para iniciar que tipo de operacion deseas realizar:\n");
	printf("Ingresa el carácter correspondiente: +, -, *, /\n");
	scanf( " %c", &operacion);
		
        printf("Ingresa el primer numero: ");
	scanf("%f", &num1);
	printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);
     
    switch (operacion) {
	case '+': //SUMA
	R = num1 + num2;
	printf("La suma es: %.f\n", R);
	break;
	case  '-': //RESTA
	R = num1 - num2;
	printf("La resta es: %-f\n", R);
	break;
	case '*': //MULTIPLICACION
	R = num1 * num2;
	printf("La multiplicacion es: %.f\n", R);
	break;
	case '/': //DIVISION 
	if (num2 != 0) {
	R = num1 / num2;
	printf("La division es: %.3f\n", R);
	} else {
	printf("No se puede dividir entre cero\n");
	}
	break;
        }
		
	system ("pause");
	return 0; //FIN DEL PROGRAMA
}
