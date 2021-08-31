#include "scanner.h"

int main()
{
    const int dim = 126;
    char buffer[dim];
    char token;
    get_token(buffer);
    for (int i = 0; i < dim; i++)
    {
        token = buffer[i];
        if (token == ',')
        {
            Print_Token(SEP);
            putchar(token);
            printf("\n");
        }
        else if (token == EOF)
        {
            Print_Token(FDT);
            putchar(token);
            break;
        }
        else
        {
            Print_Token(CAD);
            while (token != ',' && token != '\0' && token != EOF)
            {
                putchar(token);
                i++;
                token = buffer[i];
            }
            printf("\n");
        }
    }

    return 0;
}
