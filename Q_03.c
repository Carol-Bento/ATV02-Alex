/*3) Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. 
Calcule e mostre a união de X com Y. Isto é, um vetor que contenha os valores de X seguidos dos valores de Y.*/
#include <stdio.h>
#define TAM 10

int main()
{
    int t = TAM * 2;
    int X[TAM], Y[TAM], Z[t];
    
    printf("Digite valores para preencher o vetor X: ");
    for (int i = 0; i < TAM; i++)
        scanf("%d", &X[i]);
    
    printf("Digite valores para preencher o vetor Y: ");
    for (int i = 0; i < TAM; i++)
        scanf("%d", &Y[i]);

    printf("Vetor Z: ");
    for (int i = 0; i < TAM; i++) {
        Z[2*i] = X[i];
        Z[2*i + 1] = Y[i];
    }
    
    for (int i = 0; i < t; i++) {
        printf("%d ", Z[i]);
    }

    return 0;
}
