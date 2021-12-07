/*
4) Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois vetores resultantes. 
O primeiro vetor resultante deve conter os números positivos; o segundo deve conter os números negativos. 
Cada vetor resultante vai ter, no máximo, oito posições, que poderão não ser completamente utilizadas.
Bons estudos!
*/
#include <stdio.h>
#define TAM 8

int main()
{
    int vet1[TAM], vet_p[TAM], vet_n[TAM];
    
    printf("Preencha o vetor: ");
    for (int i = 0; i < TAM; i++){
        scanf("%d", &vet1[i]);
        
        if (vet1[i] != 0){
            if(vet1[i] > 0 ){
               for (int j = 0; j < TAM; j++)
                    vet_p[j] = vet1[i]; 
            } else{
                for (int j = 0; j < TAM; j++)
                    vet_n[j] = vet1[i];
            }
        }
    }
    
    for (int i = 0; i < TAM; i++){
        if (vet1[i] != 0){
            if(vet1[i] > 0 ){
                vet_p[i] = vet1[i]; 
            } else{
                vet_n[i] = vet1[i];
            }
        }
    }
    
    printf("Valores positivos: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vet_p[i]);
    }
    
    printf("\n Valores negativos: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d", vet_n[i]);
    }
    
}
