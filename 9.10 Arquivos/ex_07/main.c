#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 200

/*receber arquivo de texto do usuario; criar outro arquivo substituindo as vogais deste por "*" */

int main()
{
    char str[TAM], aux[TAM];
    int i = 0;
    FILE *arq  = fopen("arq.txt", "w");
    FILE *arq2 = fopen("arq2.txt", "w");
    printf("String:  ");
    fflush(stdin);
    fgets(str, TAM, stdin);

    while(i < strlen(str))
    {
        fputc(aux[i] = str[i], arq);

        if(str[i] != 'A' &&
           str[i] != 'a' &&
           str[i] != 'E' &&
           str[i] != 'e' &&
           str[i] != 'I' &&
           str[i] != 'i' &&
           str[i] != 'O' &&
           str[i] != 'o' &&
           str[i] != 'U' &&
           str[i] != 'u')
        {fputc(str[i], arq2);}

        else
        {fputc(str[i] = '*', arq2);}

      i++;
    }

    fclose(arq);
    fclose(arq2);

    arq = fopen("arq.txt", "r");
    arq2 = fopen("arq2.txt", "r");

    i = 0;
    printf("Arq: ");
    while(i < strlen(aux))
    {
        printf("%c", aux[i]);
        i++;
    }
    fclose(arq);

    i = 0;
    printf("Arq 2: ");
    while(i < strlen(str))
    {
        printf("%c", str[i]);
        i++;
    }
    fclose(arq2);

    return 0;
}
