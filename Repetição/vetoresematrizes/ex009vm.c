/* Ex6_sem_repeticoes.c */
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int seq[20];
    printf("Quantos numeros vai inserir (max 20)? ");
    scanf("%d", &n);
    if (n < 1 || n > 20) {
        printf("Numero invalido.\n"); return 1;
    }

    printf("Digite %d numeros inteiros e positivos:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &seq[i]);

    int unique[20], m = 0;
    for (int i = 0; i < n; i++) {
        bool existe = false;
        for (int j = 0; j < m; j++) {
            if (seq[i] == unique[j]) { existe = true; break; }
        }
        if (!existe) unique[m++] = seq[i];
    }

    printf("Sequencia original:\n");
    for (int i = 0; i < n; i++) printf("%d ", seq[i]);
    printf("\nSequencia sem repeticoes:\n");
    for (int i = 0; i < m; i++) printf("%d ", unique[i]);
    printf("\n");
    return 0;
}
