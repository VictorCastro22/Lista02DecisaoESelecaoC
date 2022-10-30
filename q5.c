#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL,"Porguese_Brazil");

    /*O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
    pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
    e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
    com a tabela abaixo:

            IMC                 Interpretação
    Menor que 18,5              Abaixo do peso
    Entre 18,5 e menor que 25   Peso normal
    Entre 25 e menor que 30     Sobrepeso
    Entre 30 e menor que 35     Obesidade grau 1
    Entre 35 e menor que 40     Obesidade grau 2
    Maior ou igual a 40         Obesidade grau 3*/

    float peso, h, imc, al;

    printf("Insira seu peso em quilogramas (kg): ");
    scanf("%f", &peso);
    printf("Insira sua altura em metros: ");
    scanf("%f", &h);

    al = h * h;
    imc = peso/al;
    printf("Seu IMC: %.2f\n", imc);
     printf("Sua situacao: ");
    if (imc < 18.5){
        printf("Abaixo do peso");
    }   
    else if (imc >= 18.5 && imc < 25) {
       printf("Peso normal"); 
    }
    else if (imc >= 25 && imc < 30) {
       printf("Sobrepeso"); 
    }
    else if (imc >= 30 && imc < 35) {
       printf("Obesidade grau 1"); 
    }
    else if (imc > 35 && imc < 40) {
       printf("Obesidade grau 2"); 
    }
    else{
        printf("Obesidade grau 3");
    }
    return 0;
}