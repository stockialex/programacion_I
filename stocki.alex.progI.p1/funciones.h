#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
     int id;
     char procesador[];
     char marca[];
     float precio;
}eNotebook

float aplicarDescuento(float precio);
int contarCaracteres(char cadena[], char caracter);

void ordenarNotebooks(eNotebook lista);


#endif // FUNCIONES_H_INCLUDED
