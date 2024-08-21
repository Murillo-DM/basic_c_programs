#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distancia(double x1, double y1, double x2, double y2) {//funcion para calcular la distancia entre dos puntos
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
double areaTriangulo(double a, double b, double c) {//funcion para calcular el area del triangulo usando la formula de Heron
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
double radioCircunscrito(double a, double b, double c, double area) {//funciin para calcular el radio del circulo circunscrito
    return (a * b * c) / (4.0 * area);
}
double areaCirculo(double radio) {//funcion para calcular el area del circulo
    return M_PI * radio * radio;
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    printf("Ingrese las coordenadas del primer vertice (x1 y1):\n");
    scanf("%lf %lf", &x1, &y1);
    printf("Ingrese las coordenadas del segundo vertice (x2 y2):\n");
    scanf("%lf %lf", &x2, &y2);
    printf("Ingrese las coordenadas del tercer vertice (x3 y3):\n");
    scanf("%lf %lf", &x3, &y3);

    double a = distancia(x2, y2, x3, y3);//longitudes de los lados
    double b = distancia(x1, y1, x3, y3);
    double c = distancia(x1, y1, x2, y2);
    double area = areaTriangulo(a, b, c);//area del triangulo
    double radio = radioCircunscrito(a, b, c, area);//radio del circulo circunscrito
    double areaCirculoCircunscrito = areaCirculo(radio);//area del circulo

    printf("El area del circulo es: %.2f\n", areaCirculoCircunscrito);
 system ("pause");
    return 0;
}



