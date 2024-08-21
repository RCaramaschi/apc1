#include <stdio.h> // incluir as bibliotecas

int main() { // função principal
  printf("Um texto sempre entre aspas duplas\n\n");
  // imprime um número inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 11,22);
  printf("%5i\n", 110);

  // imprime um numero decimal
  printf("%f\n", 10.5);
  printf("%10.2f\n", 10.5888);
  printf("%10.2f\n", 10254.5888);
 
  // imprime um caractere usar aspas simples
  printf("%c\n", 'A');
  printf("%c\n", 65);

  // imprime um string
  printf("%s\n", "Um texto sempre entre aspas duplas");
  printf("%30s\n", "Quero cafe"); // cria espaços a esquerda
  printf("%-30s\n", "Quero cafe"); // cria espaços a direita
  return 0;

  
}