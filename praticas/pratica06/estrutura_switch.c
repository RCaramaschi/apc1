#include <stdio.h>

int main()
{
    int nota = 0;

printf("Digite sua nota:\n");
    scanf("%i", &nota);
switch(nota) {
}
case 1: printf("Voce ganhou '*'.\n");
case 2: printf("Voce ganhou '**'.\n");
case 3: printf("Voce ganhou '***'.\n");
case 4: printf("Voce ganhou ****!\n");
case 5: printf("Voce ganhou *****!\n");
default: printf("Nota invalida! Tente novamente.\n");./a.exe


    return 0;
}