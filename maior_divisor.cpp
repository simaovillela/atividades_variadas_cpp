/*
Desenvolva um programa em c que leia um determinado número e verifique seu maior divisor
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, maior, cont;
    printf("\nInforme um número para verificar seu maior divisor: ");
    scanf("%d", &num);
    maior = 0;
    for (cont = num - 1; cont > 1; cont--){
        if ((num % cont) == 0 && maior == 0){
            maior = cont;
        }
    }
    printf("\n\tO maior divisor de %d é %d", num, maior);
}