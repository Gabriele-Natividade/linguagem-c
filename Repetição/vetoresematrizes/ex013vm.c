/* Ex11_intersecao_5.c */
#include <stdio.h>
#include <stdbool.h>

int main() {
    int A[5], B[5], inter[5];
    int m = 0;
    printf("Digite 5 inteiros para A:\n");
    for (int i = 0; i < 5; i++) scanf("%d", &A[i]);

    printf("Digite 5 inteiros para B:\n");
    for (int i = 0; i < 5; i++) scanf("%d", &B[i]);

    for (int i = 0; i < 5; i++) {
        // verifica se A[i] esta em B
        bool emB = false;
        for (int j = 0; j < 5; j++) if (A[i] == B[j]) { emB = true; break; }
        if (emB) {
            // verifica se ja nao esta em inter (para evitar duplicatas)
            bool jaTem = false;
            for (int k = 0; k < m; k++) if (inter[k] == A[i]) { jaTem = true; break; }
            if (!jaTem) inter[m++] = A[i];
        }
    }

    if (m == 0) printf("Nenhum valor em comum entre A e B.\n");
    else {
        printf("Valores presentes em A e B:\n");
        for (int i = 0; i < m; i++) printf("%d ", inter[i]);
        printf("\n");
    }
    return 0;
}
