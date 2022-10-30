#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL,"Porguese_Brazil");

    /*Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
    de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
    a apresente a média:
    Opções:
    • ‘a’ - Aritmética.
    • ‘p’ - Ponderada (pesos: 3,3,4).*/

    char op;
    float n1, n2, n3, cal;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota: ");
    scanf("%f", &n3);
    printf("Insira que tipo de media deseja efetuar\n");
    printf("a - Aritmetica\np - Ponderada (pesos: 3,3,4)\n");
    scanf(" %c", &op);

    if (op == 'a'){
        cal = (n1 + n2 + n3) / 3;
        printf("A media aritmetica: %.2f", cal);
    }   
    else if (op == 'p'){
        cal = (n1 * 3 + n2 * 3 + n3 * 4) / (3 + 3 + 4);
        printf("A media ponderada: %.2f", cal);
    }
    else {
        printf("Tipo de media invalida!");
    }
    return 0;
}