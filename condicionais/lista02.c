#include <stdio.h>

int main() {
    int numero;
    int pares = 0;
    int impares = 0;
    
    printf("Digite uma serie de numeros inteiros\n");
    printf("Para encerrar, digite 0\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // encerra o loop
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Total de numeros pares: %d\n", pares);
    printf("Total de numeros impares: %d\n", impares);
   
    return 0;
}
