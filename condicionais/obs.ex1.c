
#include <stdio.h>

int main() {
    int numero;
    printf("\n Digite um numero: ");
    

    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("\n O numero %d e PAR", numero);
    }
    else{
        printf("\n O numero %d e IMPAR", numero);
    }
    
    return 0;
}
