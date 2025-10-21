/* Ex7_indices_impares.c */
#include <stdio.h>

int main() {
    int v[10];
    printf("Digite 10 inteiros:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &v[i]);

    printf("Indices dos elementos impares (base 0):\n");
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
