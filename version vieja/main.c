#include <stdlib.h>
#include <stdio.h>

int main()
{

    enum token
    {
        FDT, //Fin de texto
        SEP, //Separador
        CAD  //Cadena
    };

    enum token TokenActual;

    TokenActual = 2;
    printf("%d", TokenActual);

    /*

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
*/
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