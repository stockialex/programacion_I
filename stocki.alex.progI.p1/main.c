#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float precio = aplicarDescuento(100);
    printf("Precio con descuento: %.2f\n", precio);

    char nombre[4] = "lele";
    int coincidencias = contarCaracteres(nombre, 'e');
    printf("Cantidad de veces que aparece la letra E: %d", coincidencias);



    return 0;
}
