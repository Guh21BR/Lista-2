#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c, raiz1, raiz2, delta;
    printf("Digite o valor de A:");
    scanf("%f",&a);
    printf("Digite o valor de B:");
    scanf("%f",&b);
    printf("Digite o valor de C:");
    scanf("%f",&c);
    
    delta = pow(b,2) - (4 * a * c);
    
    if (delta > 0){
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são %.2f e %.2f",raiz1, raiz2);
    }
    else if (delta == 0){
        raiz1 = -b/(2*a);
        printf("A raiz é: %.2f",raiz1);
    }
    else if(a == 0){
        printf("Não é uma raiz de segundo grau");
    }
     else {
         printf("Não existe raízes reais");
     }
    return 0;
}