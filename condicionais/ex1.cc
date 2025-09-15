#include <stdio.h>

int main()
{
    int n = 379;
    int c, d, u, resultado;

    c = n / 100;                // pega a CENTENA ? 3
    d = (n % 100) / 10;         // pega a DEZENA  ? 7
    u = n % 10;                 // pega a UNIDADE ? 9

    resultado = (u * 100) + (d * 10) + c;   // inverte os valores

    printf("valor inicial: %d \n", n);
    printf("valor invertido: %d \n", resultado);

    return 0;
}
