#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL,"Porguese_Brazil");

    /*Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
    de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.*/

    int op;
    float din, con;

    printf("Insira o total de dinheiro: ");
    scanf("%f", &din);
    printf("Escolha a opcao que deseja efetuar:\n");
    printf("1- Convesao real para dolar\n2- Conversao dolar para real:\n");
    printf("*Obs:valores diferentes de 1 e 2 sera considerado como conversao de dolar para real\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
    con = din / 5.30;
    break;
    case 2:
    con = din * 5.30;
    break;
    default:
    con = din * 5.30;
    break;
    }
    printf("O valor convertido fica: %.2f", con);
    return 0;
}