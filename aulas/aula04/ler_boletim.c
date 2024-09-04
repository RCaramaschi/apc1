#include <stdio.h>

int main() {
  int matricula = 0;
  float A1 = 0.0f;
  float A2 = 0.0f;
  float Media = 0.0f;

  printf("Matricula: ");
  scanf("%i", &matricula);
  getchar();

  printf("Nota A1: ");
  scanf("%f", &A1);
  getchar();

  printf("Nota A2: ");
  scanf("%f", &A2);
  getchar();

  Media = (A1+A2)/2;

  printf("A sua media eh %.2f", Media);  

  
  return 0;
}
