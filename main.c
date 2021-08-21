#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{

    enum token
    {
        FDT, //Fin de texto
        SEP, //Separador
        CAD  //Cadena
    };

    char caracter;
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
    } while (caracter != EOF);

    return 0;
}
