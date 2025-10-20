#include <stdio.h>

int main() {
    float notas[5], soma = 0, media;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 5;
    printf("\nMédia: %.2f\n", media);

    printf("Notas acima da média:\n");
    for (i = 0; i < 5; i++) {
        if (notas[i] > media)
            printf("%.2f ", notas[i]);
    }

    return 0;
}
