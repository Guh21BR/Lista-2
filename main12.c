#include <stdio.h>

int main(){
    int a,b ,c;
    printf("Digite o valor de A:");
    scanf("%i",&a);
    printf("Digite o valor de B:");
    scanf("%i",&b);
    printf("Digite o valor de C:");
    scanf("%i",&c);
    
    if (c<a && c<b && b<a){
        printf("%i,%i,%i",c,b,a);
    }
    if (b<a && b<c && c<a){
        printf("%i,%i,%i",b,c,a);
    }
    if (a<b && a<c && b<c){
        printf("%i,%i,%i",a,b,c);
    }
    if (a<b && a<c && c<b){
        printf("%i,%i,%i",a,c,b);
    }
    return 0;
}