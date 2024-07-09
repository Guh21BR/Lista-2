#include <stdio.h>

int main(){
    float a, b, c;
    printf("Digite o valor do primeiro número:");
    scanf("%f",&a);
    printf("Digite o valor do segundo número:");
    scanf("%f",&b);
    printf("Digite o valor do terceiro número:");
    scanf("%f",&c);

    if (a == b && b== c && a == c){
        printf("Equilátero");
    }
    else if (a==b ||  a==c  || b==c ){
        printf("Isósceles");
    }
    else {
        printf("Escaleno");
    }
    return 0;

}