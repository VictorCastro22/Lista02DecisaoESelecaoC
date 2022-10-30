#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL,"Porguese_Brazil");

    /*Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
    são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
    e positivos.*/

    int v1, v2, v3, v4, v5, p = 0, n = 0;

    printf("Insira o primeiro numero: ");
    scanf("%d", &v1);
    printf("Insira o segundo numero: ");
    scanf("%d", &v2);
    printf("Insira o terceiro numero: ");
    scanf("%d", &v3);
    printf("Insira o quarto numero: ");
    scanf("%d", &v4);
    printf("Insira o quinto numero: ");
    scanf("%d", &v5);

    if (v1 > 0){
        p = ++p;
    }   
    else{
        n = ++n;
    }
     if (v2 > 0){
        p = ++p;
    }   
    else{
        n = ++n;
    }
     if (v3 > 0){
        p = ++p;
    }   
    else{
        n = ++n;
    }
     if (v4 > 0){
        p = ++p;
    }   
    else{
        n = ++n;
    }
     if (v5 > 0){
        p = ++p;
    }   
    else{
        n = ++n;
    }
    printf("O total de numeros positivos: %d\nO total de numeros negativos: %d", p, n);
    return 0;
}