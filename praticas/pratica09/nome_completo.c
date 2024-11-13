#include <stdio.h>
#include <string.h>

int main()

{
char primeiro_nome[11];
char ultimo_nome[11];
char nome[31];

    memset(primeiro_nome, '\0', sizeof(primeiro_nome)); // minha sugestao
    memset(ultimo_nome, '\0', sizeof(ultimo_nome));
    memset(nome, '\0', sizeof(nome));
    scanf("%[^\n]s", primeiro_nome); 
    while (getchar()!='\n');
    scanf("%[^\n]s", ultimo_nome);
    while (getchar()!='\n');
    strcpy(nome, primeiro_nome);

    strcat(nome, " ");
    strcat(nome, ultimo_nome);   
    
    printf("%s\n", nome);

    return 0;
}