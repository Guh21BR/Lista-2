#include <stdio.h>

int main(){
    char cod;
    float salario, reajuste, valor;
    printf("Digite o código:");
    scanf("%c",&cod);
    
    switch(cod){
        case '1':
        printf("Digite o seu salario:");
        scanf("%f",&salario);
        reajuste = salario * 1.10;
        valor = reajuste - salario;
        printf("O salario novo eh:%.2f e o valor do reajuste eh:%.2f",reajuste,valor);
        break; 
        
        case '2':
        printf("Digite o seu salario:");
        scanf("%f",&salario);
        reajuste = salario * 1.07;
        valor = reajuste - salario;
        printf("O salario novo eh:%.2f e o valor do reajuste eh:%.2f",reajuste,valor);
        break;
        
        case '3':
        printf("Digite o seu salario:");
        scanf("%f",&salario);
        reajuste = salario * 1.12;
        valor = reajuste - salario;
        printf("O salario novo eh:%.2f e o valor do reajuste eh:%.2f",reajuste,valor);
        break;
        
        case '4':
        printf("Digite o seu salario:");
        scanf("%f",&salario);
        reajuste = salario * 1.11;
        valor = reajuste - salario;
        printf("O salario novo eh:%.2f e o valor do reajuste eh:%.2f",reajuste,valor);
        break;
        
        default:
        printf("Esse codigo nao existe");
    }
    return 0;
}