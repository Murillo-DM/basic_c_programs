#include <stdio.h>
#include<stdlib.h>

int main (){
	int year, residuo;
	
	printf("Introduzca el ano para verificar si es bisiesto o no\n");
	scanf ("%d", &year);
	
	residuo = year % 4;

	    if (residuo % 2 == 0) {
	        printf("%d es un ano bisiesto\n", year);
	    } else {
	        printf("%d es un año bisiesto\n", year);
	    }
	
	system("pause");
	return 0;
}