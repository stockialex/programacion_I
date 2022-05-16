#include "funciones.h"


float aplicarDescuento(float precio){
    float descuento = (precio * 5) / 100;
    float precioFinal = precio - descuento;

    return precioFinal;
}

int contarCaracteres(char cadena[], char caracter){
    int i = 0, contador = 0;

    do{
        if(cadena[i] == caracter){
            contador++;
        }
        i++;
    }while(cadena[i] != '\0');

    return contador;
}

void ordenarNotebooks(eNotebook lista, int TAM){
    eNotebook auxNotebook;
    if(lista != NULL && tam > 0){
        for(int i=0; i<tam-1; i++){
            for(int j=i+1; j<tam; j++){
               if(strcmp(lista[i].nombre, lista[j].nombre) == 0){
                if(lista[i].precio > lista[j].precio){
                    auxNotebook = lista[i];
                    lista[i] = lista[j];
                    lista[j] = auxNotebook;
                }
               }
            }
        }
    }
}
