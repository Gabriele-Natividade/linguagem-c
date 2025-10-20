#include <stdio.h>

int main() {
    int num[10];
    int i, pares = 0, impares = 0;

    for (i = 0; i < 10; i++) {
        printf("\nDigite o %dº numero: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nQuantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}