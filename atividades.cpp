#include<stdio.h>

int fat(int num){
    int ant, f;
    if(num == 0){
        return 1;
    }else if(num <0){
        return 0;    
    }
    f = num;
    ant = num - 1;
    
    while(ant > 0){
        f = f * ant;
        ant--;    
    }
    return f;
}

int arranjo (int n, int r){
    int a;
    printf("\n%d",fat(n) );
    printf("\n%d",fat(n-r) );
    a  = fat(n)    / fat (n-r);
    return a;
}

int main(){
    int arranjos, calcado, camisa, calca, soma;
    printf("Quantos sapatos: ");
    scanf("%d", &calcado)    ;
    printf("Quantas camisas: ");
    scanf("%d", &camisa)    ;
    printf("Quantas calcas: ");
    scanf("%d", &calca)    ;
    soma = calca + camisa + calcado;
         
    printf("%d", soma);
    arranjos = arranjo (soma, 3);
    
    printf("\nposso usar meu vestuario de %d maneiras diferentes", arranjos);
}

