/*
  Construa um programa que calcule a soma de dois numeros inteiros
*/

#include <stdio.h> // incluir as bibliotecas
#include <math.h>

int main() { // função principal
  int a, b, soma;
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  soma = a + b;
  printf("A soma de %d e %d é %d\n", a, b, soma);
  printf("A raiz quadrada de %d é %f\n", soma, sqrt(soma));
  return 0;
}


  