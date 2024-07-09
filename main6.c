#include <stdio.h>

int main(){
    int quant;
    char cod;
    float preco, preco2;
    printf("Digite o código:");
    scanf("%c",&cod);

    switch(cod){
        case '1':
        printf("Digite a quantidade de produto:");
        scanf("%i",&quant);
        preco = quant * 5.30;
        
        if (quant >= 15){
            preco = (quant * 5.30) * 0.85;
            printf("O valor eh:%.2f",preco);
        }
        else if(preco >=40){
            preco2 = preco * 0.85;
            printf("O valor eh:%.2f",preco2);
        }
        else{
            printf("O valor eh:%.2f",preco);
        }
        
        case '2':
        printf("Digite a quantidade de produto:");
        scanf("%i",&quant);
        preco = quant * 6;
        
        if (quant >= 15){
            preco = (quant * 6) * 0.85;
            printf("O valor eh:%.2f",preco);
        }
        else if(preco >=40){
            preco2 = preco * 0.85;
            printf("O valor eh:%.2f",preco2);
        }
        else{
            printf("O valor eh:%.2f",preco);
        }
        
        case '3':
        printf("Digite a quantidade de produto:");
        scanf("%i",&quant);
        preco = quant * 3.20;
        
        if (quant >= 15){
            preco = (quant * 3.20) * 0.85;
            printf("O valor eh:%.2f",preco);
        }
        else if(preco >=40){
            preco2 = preco * 0.85;
            printf("O valor eh:%.2f",preco2);
        }
        else{
            printf("O valor eh:%.2f",preco);
        }
        
        case '4':
        printf("Digite a quantidade de produto:");
        scanf("%i",&quant);
        preco = quant * 2.50;
        
        if (quant >= 15){
            preco = (quant * 2.50) * 0.85;
            printf("O valor eh:%.2f",preco);
        }
        else if(preco >=40){
            preco2 = preco * 0.85;
            printf("O valor eh:%.2f",preco2);
        }
        else{
            printf("O valor eh:%.2f",preco);
        }
        default:
        printf("Não existe esse código");
    }
    return 0;
}