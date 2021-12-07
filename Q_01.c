#include <stdio.h>
/*1) Escreva um programa que recebe um vetor de 10 elementos do usuário e escreve a média dos valores no vetor.*/
int main()
{
    int vet[10], soma;
    float media;
    
    //Preenchendo o vetor
    for (int i = 0; i < 10; i++){
        printf("Digite o %d ° número: ", i + 1);
        scanf("%d",&vet[i]);
    }
    
    //Fazendo o cálculo de soma
    for (int i = 0; i < 10; i++){
        soma = soma + vet[i];
    }
    
    //Finalizando cálculo da média
    media = ((soma)/10);
    
    printf("A média é %0.2f", media);
    return 0;
}
