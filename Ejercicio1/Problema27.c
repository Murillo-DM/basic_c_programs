#include <stdio.h>
 #include <stdlib.h>

int es_primo(int num) {
    if (num <= 1) 
    	return 0;
    if (num == 2) 
    	return 1; //2 es primo
    if (num % 2 == 0) return 0; //los numeros pares mayores a 2 no son primos
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0; //no es primo
    }   
    return 1;
}
int main() {
    int n = 20, contador = 0, num = 2, suma = 0;  
    
    while (contador < n) {
        if (es_primo(num)) {
            suma += num;
            contador++;
        }
        num++;
    }
    printf("La suma de los primeros 20 numeros primos es: %d\n", suma);

    system ("pause");
    return 0;
}
