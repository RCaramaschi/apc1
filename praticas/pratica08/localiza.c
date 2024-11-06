#include <stdio.h>

int main()
{
    int numeros[10];
    int numero = 0;
    int achou = -1;

    for (int i = 0; i < 10; i++)
    {
        printf("Entre com o numero: ");
        scanf("%i", &numeros[i]);
    }
printf("Entre com o numero a ser buscado: ");
scanf("%i", &numero);

for (int i = 0; i < 10; i++)
    { if (numeros [i] == numero) {
        achou = i; break;
    }

    }

    if (achou < 0) {

        printf("Numero nao encontrado\n");
    } else {
        printf("Numero encontrado na posicao %i\n", achou);
    }
return 0;
}