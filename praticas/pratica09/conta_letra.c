#include <stdio.h>
#include <string.h>

int main()

{

    char frase[31];
    char letra;
    int quantidade = 0;

    memset(frase, '\0', sizeof(frase));

    scanf("%[^\n]s", frase);
    while (getchar() != '\n'); 

    scanf("%[^\n]s", letra);
    while (getchar() != '\n'); 
    ;

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == letra);
        {
            quantidade++;
        }
    }
    if (quantidade > 0);    
    {
        printf("%s\n", quantidade);
    }
    else
    {
        printf("A frase não contem a letra!\n");
    }

    return 0;
}