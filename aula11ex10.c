#include <stdio.h>


float media(float numeros[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return soma / tamanho;
}


float dobro(float numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] *= 2.0;
    }
    return media(numeros, tamanho);
}

void maior(float numeros[], int tamanho) {
    if (tamanho <= 0) {
        return; 
    }

    int indiceMaior = 0;
    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > numeros[indiceMaior]) {
            indiceMaior = i;
        }
    }

   
    if (indiceMaior != 0) {
        float temp = numeros[0];
        numeros[0] = numeros[indiceMaior];
        numeros[indiceMaior] = temp;
    }
}


void imprimirVetor(float numeros[], int tamanho) {
    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("]\n");
}

int main() {
    float numeros[2];

   
    printf("Digite o primeiro numero real: ");
    scanf("%f", &numeros[0]);
    printf("Digite o segundo numero real: ");
    scanf("%f", &numeros[1]);

    
    printf("\nVetor antes de maior(): ");
    imprimirVetor(numeros, 2);

    // Chama a função maior()
    maior(numeros, 2);

    
    printf("Vetor depois de maior(): ");
    imprimirVetor(numeros, 2);

    
    printf("\nVetor antes de media(): ");
    imprimirVetor(numeros, 2);

    float media_original = media(numeros, 2);
    printf("Media original: %.2f\n", media_original);

   
    printf("\nVetor antes de dobro(): ");
    imprimirVetor(numeros, 2);

   
    float nova_media = dobro(numeros, 2);
    printf("Nova media (apos dobro()): %.2f\n", nova_media);

    
    printf("Vetor depois de dobro(): ");
    imprimirVetor(numeros, 2);

    return 0;
}
