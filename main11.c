#include <stdio.h>

int main(){
    float altura;
    int idade;
    printf("Digite a sua idade:");
    scanf("%i",&idade);
    printf("Digite a sua altura:");
    scanf("%f",&altura);
    
    if (altura>=1.5 && idade>=12){
        printf("Barco Viking\n");
    }
    
    if (altura>=1.4 && idade>=14){
        printf("Elevator of D E A T H !!!!\n");
    } 
    
    if (altura>=1.7 || idade>=16 ){
        printf("Final K I L L E R !!!\n");
    }
    else{
        printf("Não pode em nenhum brinquedo");
    }
    return 0;
}