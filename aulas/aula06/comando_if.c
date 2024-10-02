#include <stdio.h> 

int main() { 
    int numero;

    printf("Entre com numero: ");
    int deu_certo = scanf("%i", &numero);

    int eh_divisivel_por_2 = numero % 2 == 0;

    if (eh_divisivel_por_2) {
        printf("O numero %i eh_par!\n", numero);        

    } else {
        printf("O numero %i eh impar!\n", numero);
    }
        // comando if aninhado
    int idade = 0;
    if (idade < 16) {
        printf("Você não pode votar!\n");
    } else {
        if (idade >= 18 && idade <= 70) {
        printf("Você deve votar\n");  
        } else {
            printf("Você não é obrigado a votar\n");
        }
        
    }   

    float media = 0.0f;
    printf("Entre com a sua media final: ");
    deu_certo = scanf("%f", &media);

    // if encadeado

    if (media >= 9.0f && media <= 10.0f){
        printf("Sua mençao eh SS.\n");
    } else if  (media >= 7.0f && media <= 8.9f){ 
        printf("Sua mençao eh MS.\n");
        } else if  (media >= 5.0f && media <= 6.9f){ 
        printf("Sua mençao eh MM.\n");

  return 0;
}
  
