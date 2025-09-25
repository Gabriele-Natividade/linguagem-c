#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("\nDigite o seu peso em Kg e sua altura em metros: ");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    printf("\nSeu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}

