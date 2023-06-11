/*
Escreva um programa e C que leia algumas notas de alunos, quando for a última nota, o usuário deve informar -1,
 sabendo-se que, a média é 60, para aprovação, informe quantos alunos, não conseguiram atingir a média
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float nota = 1;
    int conta, i;
    for (i = 1; nota > 0; i++){
        printf("\nInforme a nota &d: ", i);
        scanf("%f", &nota);
        if (nota >= 0 && nota < 60){
            conta++;
        }
    }
    printf("\n\t\tSão %d alunos reprovados", conta);
}