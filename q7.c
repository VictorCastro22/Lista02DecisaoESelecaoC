#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL,"Porguese_Brazil");

    /*Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.*/

    char n1;

    printf("Insira uma letra: ");
    scanf("%c", &n1);

    if (n1 == 'a' || n1 == 'e' || n1 == 'i' || n1 == 'o' || n1 == 'u' || n1 == 'A' || n1 == 'B' || n1 == 'I' || n1 == 'O' || n1 == 'U'){
        printf("A letra e uma vogal");
    }   
    else{
       printf("A letra nao e uma vogal");
    }
    return 0;
}