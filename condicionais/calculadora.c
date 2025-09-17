#include <stdio.h>

int main(void) {
    float x, y, resultado;
    int op, continuar;

    do {
        printf("\n\t1 - soma\n\t2 - subtracao\n\t3 - multiplicacao\n\t4 - divisao");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &op);

        printf("\nDigite o primeiro numero: ");
        scanf("%f", &x);

        printf("\nDigite o segundo numero: ");
        scanf("%f", &y);

        switch(op) {
            case 1:
                resultado = x + y;
                printf("\nO resultado da soma e: %.2f", resultado);
                break;

            case 2:
                resultado = x - y;
                printf("\nO resultado da subtracao e: %.2f", resultado);
                break;

            case 3:
                resultado = x * y;
                printf("\nO resultado da multiplicacao e: %.2f", resultado);
                break;

            case 4:
                if (y != 0) {
                    resultado = x / y;
                    printf("\nO resultado da divisao e: %.2f", resultado);
                } else {
                    printf("\nErro: divisao por zero!");
                }
                break;

            default:
                printf("\nOperacao invalida");
                break;
        }

        printf("\n\nDeseja continuar calculando? (1-sim / 0-nao): ");
        scanf("%d", &continuar);

    } while(continuar != 0);

    return 0;
}
