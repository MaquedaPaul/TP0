#include "scanner.h"

void Print_Token(int Token)
{
    switch (Token)
    {
    case FDT:
        printf("Fin de Texto: ");
        break;
    case SEP:
        printf("Separador: ");
        break;
    case CAD:
        printf("Cadena: ");
        break;
    default:
        printf("No es un token valido");
        break;
    }
}

void get_token(char buffer[])
{
    char token;
    int i = 0;
    token = getchar();
    do
    {
        if (isspace(token) == 0)
        {
            if (token == ',')
            {
                buffer[i] = token;
                i++;
                token = getchar();
            }

            else
            {
                while (token != EOF && token != ',' && isspace(token) == 0)
                {
                    buffer[i] = token;
                    i++;
                    token = getchar();
                }
                buffer[i] = '\0';
                i++;
            }
        }
        else
        {
            token = getchar();
        }

    } while (token != EOF);
    if (token == EOF)
    {
        buffer[i] = EOF;
    }
}
