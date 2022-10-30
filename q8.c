#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL,"Porguese_Brazil");

    /*Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
    isso a estrutura de seleção switch.
    Obs.: Considere fevereiro como tendo 28 dias.*/

    int mes;

    printf("Insira o numero do mes: ");
    scanf("%d", &mes);

    printf("O mes tem o total de: ");

    switch (mes)
    {
    case 1:
    printf("31 dias");
    break;
    case 2:
    printf("28 dias");
    break;
    case 3:
    printf("31 dias");
    break;
    case 4:
    printf("30 dias");
    break;
    case 5:
    printf("31 dias");
    break;
    case 6:
    printf("30 dias");
    break;
    case 7:
    printf("31 dias");
    break;
    case 8:
    printf("31 dias");
    break;
    case 9:
    printf("30 dias");
    break;
    case 10:
    printf("31 dias");
    break;
    case 11:
    printf("30 dias");
    break;
    case 12:
    printf("31 dias");
    break;
    default:
    printf("Mes Invalido");
    break;
    }
    return 0;
}