/* Ex4_maior_menor_posicao.c */
#include <stdio.h>

int main() {
    int v[12];
    printf("Digite 12 inteiros:\n");
    for (int i = 0; i < 12; i++) scanf("%d", &v[i]);

    int maior = v[0], menor = v[0];
    int posMaior = 0, posMenor = 0;
    for (int i = 1; i < 12; i++) {
        if (v[i] > maior) { maior = v[i]; posMaior = i; }
        if (v[i] < menor) { menor = v[i]; posMenor = i; }
    }

    printf("Maior = %d na posicao %d\n", maior, posMaior);
    printf("Menor = %d na posicao %d\n", menor, posMenor);
    return 0;
}
