#include <stdio.h>

int main(){
    float trajeto, consumo;
    char marca;
    printf("Digite o trajeto:");
    scanf("%f",&trajeto);
    printf("Digite a marca do carro:");
    scanf(" %c",&marca);
    
    switch(marca){
        case 'A':
        consumo = trajeto/15;
        printf("O consumo é de %.2f litros",consumo);
        break;
        
        case 'B':
        consumo = trajeto/12;
        printf("O consumo é de %.2f litros",consumo);
        break;
        
        case 'C':
        consumo = trajeto/10;
        printf("O consumo é de %.2f litros",consumo);
        break;
        
        default:
        printf("Não existe essa marca em nossos registros");
        break;
    }
    return 0;
}