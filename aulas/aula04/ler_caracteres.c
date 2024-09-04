#include <stdio.h>

int main() {
  char tecla = '\0'; // caratcere nulo

  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();
  printf("Você digitou: %c\n", tecla);

  printf("Digite outra tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar();
  printf("Você digitou: %c\n", tecla);

  char nome[31];
  printf("Entre com um nome: ");
  deu_certo = scanf("%[^\n]", nome); //por ser string não usa &
  printf("Voce digitou: %s\n", nome);
  

  return 0;
}