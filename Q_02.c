#include <stdio.h>
/*Escreva um programa que recebe um vetor de 10 elementos do usuário e diz qual o maior número e qual o menor 
número do vetor.*/
int main()
{
    int vet[10], maior, menor;
    
    //Preenchendo o vetor
    for (int i = 0; i < 10; i++){
        printf("Digite o %d ° número: ", i + 1);
        scanf("%d",&vet[i]);
    }
    
    for (int j = 0; j < 10; j++){
        if(maior == 0 && menor == 0){
            maior =  vet[j];
            menor = vet[j];
        } else if (vet[j] > maior){
            maior = vet[j];
        } else if (vet[j] < menor){
            menor = vet[j];
        }
    }
    
    
    printf("O maior número é %d, e o menor é %d.", maior, menor);
    return 0;
}
