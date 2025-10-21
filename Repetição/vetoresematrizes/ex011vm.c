/* Ex9_substituir_negativos.c */
#include <stdio.h>

int main() {
    int v[10], w[10];
    printf("Digite 10 inteiros:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &v[i]);

    for (int i = 0; i < 10; i++) {
        if (v[i] < 0) w[i] = 1;
        else w[i] = v[i];
    }

    printf("Vetor original:\n");
    for (int i = 0; i < 10; i++) printf("%d ", v[i]);
    printf("\nVetor modificado (negativos -> 1):\n");
    for (int i = 0; i < 10; i++) printf("%d ", w[i]);
    printf("\n");
    return 0;
}
