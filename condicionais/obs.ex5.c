#include <stdio.h>
int main() {
    int a,b;
    printf("\n Digite dois numeros inteiros : ");
    scanf("%d %d", &a,&b);

    if (a>b) {
        printf("\n O numero maior e %d",a);
    } else if (b>a) {
        printf("\n O numero maior e %d",b);
    } else {
        printf("\n Os numeros sao iguais.");
    } 

    return 0;    
}