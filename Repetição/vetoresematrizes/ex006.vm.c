/* Ex3_intercalacao.c */
#include <stdio.h>
#include <stdbool.h>

bool crescente(int arr[], int n) {
    for (int i = 1; i < n; i++) if (arr[i] < arr[i-1]) return false;
    return true;
}

int main() {
    int V1[10], V2[10], V3[20];
    // Ler VET1 com validação
    printf("Digite 10 inteiros em ordem crescente para VET1:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &V1[i]);
    if (!crescente(V1, 10)) {
        printf("VET1 nao esta em ordem crescente. Reinicie e insira corretamente.\n");
        return 1;
    }

    // Ler VET2 com validação
    printf("Digite 10 inteiros em ordem crescente para VET2:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &V2[i]);
    if (!crescente(V2, 10)) {
        printf("VET2 nao esta em ordem crescente. Reinicie e insira corretamente.\n");
        return 1;
    }

    // Intercalação (merge)
    int i = 0, j = 0, k = 0;
    while (i < 10 && j < 10) {
        if (V1[i] <= V2[j]) {
            V3[k++] = V1[i++];
        } else {
            V3[k++] = V2[j++];
        }
    }
    while (i < 10) V3[k++] = V1[i++];
    while (j < 10) V3[k++] = V2[j++];

    printf("Vetor intercalado VET3:\n");
    for (int t = 0; t < 20; t++) printf("%d ", V3[t]);
    printf("\n");
    return 0;
}
