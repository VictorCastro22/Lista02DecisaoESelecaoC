#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Porguese_Brazil");

    /*Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
    dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
    equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
    formam um triângulo”.*/

    int a, b, c;

    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite um segundo valor: ");
    scanf("%d", &b);
    printf("Digite um terceiro valor: ");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}