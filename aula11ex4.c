#include <stdio.h>


float soma(float n[], int tamanho);

int main() {
  float vetor[3];

  
  for (int i = 0; i < 3; i++) {
    printf("Digite o número %d: ", i + 1);
    scanf("%f", &vetor[i]);
  }


  float resultado = soma(vetor, 3);

 
  printf("A soma dos números é: %.2f\n", resultado);

  return 0;
}

float soma(float n[], int tamanho) {
  float total = 0.0; 

  for (int i = 0; i < tamanho; i++) {
    total += n[i]; 
  }
  return total; 
}
