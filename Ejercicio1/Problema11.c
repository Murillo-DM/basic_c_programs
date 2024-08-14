#include <stdio.h>
#include <stdlib.h>

int main() {
    char entrada[6];  
    int horas, minutos;

    printf("Ingrese la hora en formato de 24 horas (HH:MM): ");
    fgets(entrada, sizeof(entrada), stdin);

    sscanf(entrada, "%d:%d", &horas, &minutos);

    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59) {
        printf("Hora o minutos inválidos.\n");
        return 1;
    }
    if (horas == 0) {
        horas = 12; // Medianoche
    } else if (horas > 12) {
        horas -= 12;
    } else if (horas == 12) { // Mediodia
    }
    printf("Hora en formato de 12 horas: %d:%02d\n", horas, minutos);

    system ("pause");
    return 0;
}
