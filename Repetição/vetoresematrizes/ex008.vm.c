/* Ex5_busca_valor.c */
#include <stdio.h>

int main() {
    int v[10], N, pos = -1;
    printf("Digite 10 inteiros:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &v[i]);

    printf("Digite o valor N a pesquisar:\n");
    scanf("%d", &N);

    for (int i = 0; i < 10; i++) {
        if (v[i] == N) { pos = i; break; }
    }

    if (pos >= 0) printf("Valor %d encontrado na posicao %d\n", N, pos);
    else printf("Valor %d nao encontrado no vetor.\n", N);
    return 0;
}
