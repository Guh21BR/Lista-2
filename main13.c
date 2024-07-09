#include <stdio.h>

int main(){
    float saldomed, credito;
    printf("Digite o seu saldo médio:");
    scanf("%f",&saldomed);
    
    if (400<saldomed){
        credito = saldomed * 1.30;
        printf("O seu crédito especial é:%.2f",credito);
    }
     if(300<saldomed && saldomed<=400 ){
        credito = saldomed * 1.25;
        printf("O seu crédito especial eh:%.2f",credito);
    }
    if(200<saldomed && saldomed<=300){
        credito = saldomed * 1.20;
        printf("O seu crédito especial ee:%.2f",credito);
    }
     if (saldomed<=200){
        credito = saldomed * 1.10;
        printf("O seu crédito especial eee:%.2f",credito);
    }
    return 0;
}