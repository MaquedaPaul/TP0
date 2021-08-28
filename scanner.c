#include "scanner.h"

    enum token
            {
    FDT, //Fin de texto
    SEP, //Separador
    CAD  //Cadena
            };
void Print_Token(int Token){
    if (Token == FDT){
        printf("Fin de Texto: ");
    }
    if (Token == SEP){
        printf("Separador: ");
    }
    if (Token == CAD){
        printf("Cadena: ");
    }
}

void Print_TokenV2(int Token){
    switch (Token) {
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
                Print_Token(SEP);
                putchar(caracter);
                printf("\n");
                caracter = getchar();
            }

            else
            {
                Print_Token(CAD);
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
        Print_Token(FDT);
        putchar(caracter);
        printf("\n");
    }
}


