#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main (){
    FILE *archivo = fopen("entrada.txt", "r");
    if (archivo == NULL)
    {
        perror("Error al abrir el archivo.");
        return 1;
    }

    char caracter;

    while (feof(caracter) == 0)
    {
        caracter = fgetc(archivo);
        printf("%c",caracter);
    }
    fclose(archivo);
    printf("Se ha leido correctamente el archivo.");

    return 0;
}


