#include <stdio.h>
int main(){
    int numero;
    printf("\n Digite um numero: ");

    scanf("%d", &numero);

    if (numero > 0) {
        printf("\n Este numero e positivo.");
    }else if (numero < 0){
        printf("\n Este numero e negativo");
    }else {
        printf("Este numero e 0 (zero)");
    } return 0;

    
}