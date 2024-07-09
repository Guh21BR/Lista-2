#include <stdio.h>

int main(){
    char codigo;
    float x, y, media, diferenca, produto, divisao;
    printf("Digite o valor de X:");
    scanf("%f",&x);
    printf("Digite o valor de Y:");
    scanf("%f",&y);
    printf("Digite o codigo:");
    scanf(" %c", &codigo );
    
    switch (codigo){
        case '1':
        media = (x + y)/2;
        printf("A media eh:%.2f",media);
        break;
        
        case '2':
            if ( x > y ){
            diferenca = x - y;
            printf("A diferenca eh:%.2f",diferenca);
        }
            else if (y > x){
            diferenca = y - x;
            printf("A diferenca eh:%.2f",diferenca);
        }
        break;
        
        case '3':
        produto = x * y;
        printf("O produto eh:%.2f",produto);
        break;
        
        case '4':
            if (y != 0){
                divisao = x/y;
                printf("A divisao eh:%.2f",divisao);
            }
            else{
                printf(" Não pode divisor igual a 0");
            }
            break;
            
            default:
            printf("Não existe esse codigo");
    }
    
    return 0;
}