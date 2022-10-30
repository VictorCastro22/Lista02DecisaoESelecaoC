#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL,"Porguese_Brazil");

    /*Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
    5, ou se não é divisível por nenhum deles.*/

    int n1;

    printf("Insira o primeiro numero: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0){
        printf("O numero e divisivel por 2!\n");
    }   
    else{
       printf("O numero nao e divisivel por 2!\n"); 
    }
    if (n1 % 3 == 0){
        printf("O numero e divisivel por 3!\n");
    }   
    else{
       printf("O numero nao e divisivel por 3!\n"); 
    }
    if (n1 % 5 == 0){
        printf("O numero e divisivel por 5!\n");
    }   
    else{
       printf("O numero nao e divisivel por 5!\n"); 
    }
    return 0;
}