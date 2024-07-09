#include <stdio.h>

int main(){
    int valor1, valor2, valor3;
    printf("Digite um número inteiro:");
    scanf("%i",&valor1);
    printf("Digite um número inteiro:");
    scanf("%i",&valor2);
    printf("Digite um número inteiro:");
    scanf("%i",&valor3);

    if (valor1 < valor2 && valor1 < valor3 ){
        printf("%i eh o menor valor",valor1);
    }
    if(valor2 < valor1 && valor2<valor3){
        printf("%i eh o menor valor",valor2);
    }
    else if(valor3<valor1 && valor3<valor2){
        printf("%i eh o menor valor",valor3);
    }
    return 0;
}