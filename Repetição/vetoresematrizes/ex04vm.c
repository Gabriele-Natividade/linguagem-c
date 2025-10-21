/* Ex1_produto_vetor.c */
#include <stdio.h>

int main() {
    int v[8];
    long long produto = 1;
    printf("Digite 8 inteiros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &v[i]);
        produto *= v[i];
    }
    printf("Produto dos elementos = %lld\n", produto);
    return 0;
}
