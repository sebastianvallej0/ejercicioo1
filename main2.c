#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[]){
   
    float puntos[5][3] = {{0, 0, 0}, {3, 0, 0}, {0, 0, 3}, {1, 7, 1}, {1, 0, 1}};
    float a, b, c, d, e, f, g;
    float perimetro = calcularA(puntos, &a, &b, &c, &d, &e, &f, &g);
    float area1 = calcularArea(a, b, c);
    float area2 = calcularArea(b, d, e);
    float area3 = calcularArea(a, e, f);
    float area4 = calcularArea(d, f, c);
    float areaS = area1 + area2 + area3 + area4;
    float volument= calcularVolumen(g,area1);
    printf("El area superficial es: %.2f \n", areaS);
    printf("El volumen es: %.2f \n", volument);
    return 0;
}
