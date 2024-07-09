#include <stdio.h>

int main(){
    float num1,num2,num3,media;
    printf("Digite um valor positivo:");
    scanf("%f",&num1);
    printf("Digite um segundo valor positivo:");
    scanf("%f",&num2);
    printf("Digite um terceiro valor positivo:");
    scanf("%f",&num3);

    media = (num1 + num2 + num3)/3;

    if(num1 > media ||  num1 < media){
        printf("O(s) valor(es) maior(es) que a média eh(são):%.2f",num1);
    }
    else if(num2>media || num2< media){
        printf("O(s) valor(es) maior(es) que a média eh(são):%.2f",num2);
    }
    else if(num3>media || num3<media){
        printf("O(s) valor(es) maior(es) que a média eh(são):%.2f",num3);
    }
     else {
        printf("Nenhum valor eh maior que a média");
    }
    return 0;
}