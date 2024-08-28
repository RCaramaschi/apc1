#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("tamanho do char na memoria = %lu bytes(s)\n", sizeof(char));
  printf("tamanho do int na memoria = %lu bytes(s)\n", sizeof(int));
  printf("tamanho do float na memoria = %lu bytes(s)\n", sizeof(float));
  printf("tamanho do double na memoria = %lu bytes(s)\n", sizeof(double));
  printf("tamanho do void na memoria = %lu bytes(s)\n", sizeof(void));
  printf("\n");
  printf("a faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX); //i para valores inteiros
  printf("a faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
  printf("a faixa de valores do float: de %E a %E\n", FLT_MIN, FLT_MAX); //E para potências de 10
  printf("a faixa de valores do double: de %E a %E\n", DBL_MIN, DBL_MAX);
  printf("\n");
  char tecla = 'A';
  printf("valor de tecla: %c\n", tecla);
  int idade = 49;
  printf("valor de idade: %i\n", idade);
  float nota = 9.5f; //6 casas decimais
  printf("valor de nota: %f\n", nota);
  double pi = 3.141592653; // 10 casas decimais
  printf("valor de pi: %.10f\n", pi);
  idade = 25;
  printf("valor de idade: %i\n", idade);
  printf("\n");
  const float PI = 3.14f; //duas casas decimais
  printf("valor d a constante PI: %.2f\n", PI);
  printf("\n");
  printf("tamanho do short int na memoria = %lu byte(s)\n", sizeof(short int));
  printf("tamanho do long int na memoria = %lu byte(s)\n", sizeof(long int));
  printf("tamanho do long double int na memoria = %lu byte(s)\n", sizeof(long double));
  printf("\n");
  printf("A faixa de valores do short int: de %i ate %i\n", SHRT_MIN, SHRT_MAX);
  printf("A faixa de valores do long int: de %i ate %i\n", LONG_MIN, LONG_MAX);
  printf("A faixa de valores do long double: de %LE ate %LE\n", LDBL_MIN, LDBL_MAX);
  return 0;
}