/* Ex10_ordenar5.c */
#include <stdio.h>

int main() {
    int v[5];
    printf("Digite 5 inteiros:\n");
    for (int i = 0; i < 5; i++) scanf("%d", &v[i]);

    // Bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (v[j] > v[j+1]) {
                int tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
        }
    }

    printf("Vetor ordenado:\n");
    for (int i = 0; i < 5; i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
