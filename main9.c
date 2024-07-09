#include <stdio.h>

int main(){
    int x, y;
    printf("Digite o valor de X:");
    scanf("%i",&x);
    printf("Digite o valor de Y:");
    scanf("%i",&y);
    
    if (x>0 && y>0){
        printf("Primeiro quadrante");
    }
    if (x<0 && y>0){
        printf("Segundo quadrante");
    }
    if (x<0 && y<0){
        printf("Terceiro quadrante");
    }
    if (x>0 && y<0){
        printf("Quarto quadrante");
    }
    if (y == 0 && x!= 0){
        printf("Eixo X");
    }
    if (x==0 && y!=0){
        printf("Eixo Y");
    }
    else{
        printf("Origem");
    }
    return 0;
}