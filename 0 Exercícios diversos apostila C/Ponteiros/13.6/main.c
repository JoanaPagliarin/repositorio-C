#include <stdio.h>
#include <stdlib.h>

//contar qntdd de palavras na frase

int main()
{
    char str[50], *p = &str[0];
    int tam = 0, palavra = 0;

    printf("String:  ");
    fflush(stdin);
    gets(str);
    tam = strlen(str);

    while (tam > 0)
    {
        while(*p != ' ' && tam > 0)
        {
            p++;
            tam--;

        }

        if (*(p-1) != ' ')
        palavra++;

        p++;
        tam --;
    }

    printf("\nNumeros de palavras: %d\n", palavra);

    return 0;
}
