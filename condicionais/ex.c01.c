int main() {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("O maior é %d.\n", a);
    } else if (b > a) {
        printf("O maior é %d.\n", b);
    } else {
        printf("Os dois são iguais.\n");
    }

    return 0;
}