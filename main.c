#include "scanner.h"

int main()
{
    get_token();
    return 0;
}

/*
    char caracter;
    caracter = getchar();
    do
    {
        caracter = getchar();
        if (isspace(caracter) == 0)
        {
            if (caracter == ',')
            {
                printf("Separador: ");
                putchar(caracter);
                printf("\n");
                caracter = getchar();
            }
            if (caracter == EOF)
            {
                printf("Fin de texto: ");
                putchar(caracter);
                printf("\n");
            }
            else
            {
                printf("Cadena: ");
                while (caracter != EOF && caracter != ',' && isspace(caracter) == 0)
                {
                    putchar(caracter);
                    caracter = getchar();
                }
                printf("\n");
            }
        }
        else
        {
            caracter = getchar();
        }
    } while (caracter != EOF);

*/