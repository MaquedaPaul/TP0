#ifndef FUNCIONES
#define FUNCIONES
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

enum token
{
    FDT, //Fin de texto
    SEP, //Separador
    CAD  //Cadena
};

void Print_Token(int Token);
void Print_TokenV2(int Token);
void get_token(char[]);

#endif