#include <stdio.h>

int main(){
    char letra, a, e, i, o, u;
    printf("Digite um letra:");
    scanf("%c",&letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||  letra == 'u'){
        printf ("Eh uma vogal");
    }
    else{
        printf("Não eh uma vogal");
    }
    return 0;
}