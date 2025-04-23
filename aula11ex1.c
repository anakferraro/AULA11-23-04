// Crie um programa em C que declare um vetor de 5 números inteiros, inicialize-o com valores de sua escolha e imprima cada elemento do vetor junto com seu índice, seguindo o exemplo:



#include <stdio.h>

int main() {
  
  int x[] = {10, 25, 5, 40, 15};

    for (int i = 0; i < 5; i++) {
    printf("X [%d]: %d\n", i, x[i]);
  }

  return 0;
}
