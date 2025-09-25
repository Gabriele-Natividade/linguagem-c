#include <stdio.h>

int main()
{
    int a, b, c, temp;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    // a = 3, b = 1, c = 2, temp = null
    // temp = 3, a = 1, b = 3
    // temp = 3, b = 2, c = 3

    // Ordena 1 = , b = 2, c = 3
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}