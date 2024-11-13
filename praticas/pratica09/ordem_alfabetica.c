#include <stdio.h>
#include <string.h>

int main()

{
    char palavra1[11];
    char palavra2[11];
    char nome[31];

    memset(palavra1, '\0', sizeof(palavra1));
    memset(palavra2, '\0', sizeof(palavra2));
    scanf("%[^\n]s", palavra1);
    while (getchar() != '\n');
        ;
    scanf("%[^\n]s", palavra2);
    while (getchar() != '\n');
        ;

    if (strcmp(palavra1, palavra2) >= 0)
    {
        printf("%s %s\n", palavra2, palavra1);
    }
    else
    {
        printf("%s %s\n", palavra1, palavra2);
    }

    return 0;
}