#include <stdio.h>

int main()
{
    int numero = 0;
    int idade = 0;
    float media = 0.0f;
    printf("Digite um número inteiro:\n");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;
    if (numero_eh_divisivel_por_2)
    {
        printf("O numero %i eh par!\n", &numero);
    }
    else
    {
        printf("O numero %i eh impar!\n", numero);
    }

    printf("Digite sua idade:\n");
    scanf("%i", &idade);

    if (idade < 16)
    {
        printf("Voce naum pode votar!\n");
    }
    else

    {
        if (idade < 18 || idade > 70)
        {
            printf("Voce pode votar!\n");
        }

        else
        {
            if (idade > 18 || idade < 70)
            {
                printf("Voce eh obrigado a votar!\n");
            }
        }
    }

    printf("Digite sua media final: ");
    scanf("%f", &media);
if (media == 0.0f) {
  printf("A mencao eh 'SR'.\n");
}
else if (media < 3.0f) {
  printf("A mencao eh 'II'.\n");
}
else if (media < 5.0f) {
  printf("A mencao eh 'MI'.\n");
}
else if (media < 7.0f) {
  printf("A mencao eh 'MM'.\n");
}
else if (media < 9.0f) {
  printf("A mencao eh 'MS'.\n");
}
else {
  printf("A mencao eh 'SS'.\n");
}




    return 0;
}