#include <stdio.h>

int main (){
    int nota, nota2, nota3, nota4, nota5;
    printf("Digite 1 para sim e 0 para não\n");
    printf("Tem Interface Gráfica:");
    scanf("%i",&nota);
    printf("Tem Inteligência Artificial:");
    scanf("%i",&nota2);
    printf("Tem Encapsulamento:");
    scanf("%i",&nota3);
    printf("Tem Indentação:");
    scanf("%i",&nota4);
    printf("Tem Structs:");
    scanf("%i",&nota5);
    
    if(nota == 1 || nota2 == 1 && nota3 == 1 && nota4 == 1 && nota5 == 1){
        printf("Você foi aprovado!!");
    }
    else{
        printf("Se fudeu");
    }
    return 0;
}