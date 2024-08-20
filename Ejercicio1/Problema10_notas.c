#include<stdio.h>
#include<stdlib.h>

int main (){
	int numero, Iteracion, Residuo_Numero, Capicua = 0;
	
	printf ("Introduce un numero;\n");  
	scanf ("%d", &numero);
	Iteracion = numero;
	
	while(Iteracion != 0){
		Residuo_Numero = Iteracion%10;
		Capicua = (Capicua * 10) + Residuo_Numero;
		Iteracion = Iteracion / 10;
	}
	if (Capicua == numero){
		printf("%d es un numero capicua\n", numero);
    } else {
        printf("%d no es un numero capicua\n", numero);
system ("pause");	
        return 1;
    }
	
    system ("pause");	
	return 0;
}

