/* Ex2_multiplica_vetores.c */
#include <stdio.h>

int main() {
    int A[8], B[8], C[8];
    printf("Digite 8 inteiros para A:\n");
    for (int i = 0; i < 8; i++) scanf("%d", &A[i]);

    printf("Digite 8 inteiros para B:\n");
    for (int i = 0; i < 8; i++) scanf("%d", &B[i]);

    for (int i = 0; i < 8; i++) C[i] = A[i] * B[i];

    printf("Vetor C (produto A*B):\n");
    for (int i = 0; i < 8; i++) printf("%d ", C[i]);
    printf("\n");
    return 0;
}
