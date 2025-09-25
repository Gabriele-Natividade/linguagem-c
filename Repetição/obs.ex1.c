#include <stdio.h>

int main() {
    int numero;
    int i; 

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("\nContando de 1 ate %d:\n", numero); 

    
        for (i = 1; i <= numero; i++) {
            printf("%d\n", i); 
        }
    } else {
        printf("\nO numero inserido nao e positivo.\n");
    }

    return 0;
}
