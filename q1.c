#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL,"Porguese_Brazil");

    /*Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.*/

    int v1, v2, v3;

    printf("Insira o primeiro numero: ");
    scanf("%d", &v1);
    printf("Insira o segundo numero: ");
    scanf("%d", &v2);
    printf("Insira o terceiro numero: ");
    scanf("%d", &v3);

    if (v1 > v2 && v2 > v3){
        printf("o maior numero  %d e o menor %d", v1, v3);
    }   
    else if (v3 > v2 && v2 > v1){
        printf("o maior numero  %d e o menor %d", v3, v1);
    }
    else if (v2> v3 && v3 > v1){
        printf("o maior numero  %d e o menor  %d", v2, v1);
    }
    else{
        printf("o maior numero  %d e o menor  %d", v2, v3);
    }   
    return 0;
}