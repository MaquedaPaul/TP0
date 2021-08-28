#include "scanner.h"

void get_token()
{
    char caracter;
    caracter = getchar();
    do
    {
        if (isspace(caracter) == 0)
        {
            if (caracter == ',')
            {
                printf("Separador: ");
                putchar(caracter);
                printf("\n");
                caracter = getchar();
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
    if (caracter == EOF)
    {
        printf("Fin de texto: ");
        putchar(caracter);
        printf("\n");
    }
}
